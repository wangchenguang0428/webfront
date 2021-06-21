package com.ruyuan.twelve.juc.week02;

import java.util.concurrent.Callable;
import java.util.concurrent.ScheduledThreadPoolExecutor;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicInteger;

/**
 * @author <a href="mailto:little@163.com">little</a>
 * version: 1.0
 * Description:负责连接小区大楼里的智能安防系统里的报警功能模块，并发送报警信息给报警服务器
 * 1.确保报警模块和报警服务器连接建立
 * 2.定时调度来检查和报警服务器的连接状态是否正常
 * 3.发送报警信息给报警服务器（当还未建立连接的时候同步阻塞等待）
 **/
public class AlarmAgent {

    /**
     * 报警系统是否连接上了报警服务器
     */
    private volatile boolean connectedToServer = false;

    /**
     * 保护性条件
     */
    Predicate agentConnected = new Predicate() {
        @Override
        public boolean evaluate() {
            // 连接是否建立完成
            return connectedToServer;
        }
    };

    /**
     * blocker对象
     */
    private Blocker blocker = new ConditionVarBlocker(false);

    /**
     * 上报报警信息给报警服务
     */
    public void sendAlarm(AlarmInfo alarmInfo) throws Exception {
        // 构建guardedAction
        GuardedAction<Void> guardedAction = new GuardedAction<Void>(agentConnected) {
            @Override
            public Void call() throws Exception {
                // 执行目标函数
                doSendAlarm(alarmInfo);
                return null;
            }
        };

        // 通过blocker执行目标
        blocker.callWithGuard(guardedAction);
    }

    /**
     * 发送报警信息给报警服务器
     *
     * @param alarmInfo 报警信息
     */
    private void doSendAlarm(AlarmInfo alarmInfo) {
        // 建立socket连接发送数据给报警信息
        System.out.println("start send alarm:" + alarmInfo);
        try {
            Thread.sleep(50);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        // 模拟上报50ms
        System.out.println("end sen alarm");
    }

    /**
     * 初始化 报警服务
     * 1.连接报警服务器的线程去进行连接
     * 2.定时调度线程每隔5s去检查一次连接
     */
    public void init() {
        // 报警服务于报警服务器连接的线程
        Thread connectingThread = new Thread(new ConnectingTask());
        connectingThread.start();

        // 每个5s发送一次心跳到报警服务器
        ScheduledThreadPoolExecutor heartbeatExecutor = new ScheduledThreadPoolExecutor(5, new ThreadFactory() {

            private AtomicInteger index = new AtomicInteger();

            @Override
            public Thread newThread(Runnable r) {
                Thread thread = new Thread();
                thread.setName("heartbeat-thread-" + index);
                // 当jvm退出的时候退出
                thread.setDaemon(true);
                return thread;
            }
        });

        // 每5s执行一次
        heartbeatExecutor.scheduleAtFixedRate(new HeartbeatTask(), 5000, 2000, TimeUnit.MILLISECONDS);

    }


    /**
     * 与报警服务器建立连接的线程
     */
    class ConnectingTask implements Runnable {

        @Override
        public void run() {

            // 走socketChannel的方式和告警服务器建立一个连接
            // 这里我们就简单模拟一下10s后建立连接
            try {
                Thread.sleep(10 * 1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }

            // 连接建立完成
            System.out.println("alarm connected");
            onConnected();
        }
    }

    /**
     * 心跳检查线程
     */
    class HeartbeatTask implements Runnable {

        @Override
        public void run() {
            // 通过socket和报警服务器发送心跳机制
            if (!testConnection()) {
                // 连接断开
                onDisconnected();
                // 重连
                reconnected();
            }
        }
    }

    /**
     * 测试连接是否正常
     *
     * @return 结果
     */
    private boolean testConnection() {
        // 通过socket给报警服务器发送一次连接
        // 模拟发送一次
        try {
            Thread.sleep(50);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        System.out.println("test connection normal");
        return true;
    }

    /**
     * 重新连接
     */
    private void reconnected() {
        // 重新执行一次
        ConnectingTask connectingTask = new ConnectingTask();
        // 直接通过心跳线程执行一次重连，这里就不单独开启thread
        connectingTask.run();
    }

    /**
     * 连接断开
     */
    private void onDisconnected() {
        // 通过volatile的语义让其他线程读取到，其他线程上报报警消息是stateOperation不满足则阻塞
        connectedToServer = false;
    }

    /**
     * 确认和报警服务器建立链表
     */
    private void onConnected() {
        // 通过blocker去唤醒
        try {
            blocker.signalAfter(new Callable<Boolean>() {
                @Override
                public Boolean call() throws Exception {
                    // 唤醒前的状态动作
                    // 修改连接报警服务器的状态
                    System.out.println("update connectedServer = true");
                    connectedToServer = true;
                    // 条件满足，执行唤醒
                    return Boolean.TRUE;
                }
            });
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}