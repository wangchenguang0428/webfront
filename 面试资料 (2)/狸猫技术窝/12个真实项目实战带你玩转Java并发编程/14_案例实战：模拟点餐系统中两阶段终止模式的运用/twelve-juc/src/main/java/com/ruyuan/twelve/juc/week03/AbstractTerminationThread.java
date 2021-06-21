package com.ruyuan.twelve.juc.week03;

/**
 * @author <a href="mailto:little@163.com">little</a>
 * version: 1.0
 * Description:中断线程的抽象类
 **/
public abstract class AbstractTerminationThread extends Thread implements Termination {

    /**
     * 线程共享停止的标志实例对象
     */
    public final TerminationToken terminationToken;

    public AbstractTerminationThread() {
        this(new TerminationToken());
    }

    public AbstractTerminationThread(TerminationToken terminationToken) {
        this.terminationToken = terminationToken;
        System.out.println("注册告警线程到线程停止的标志实现对象队列中");
        terminationToken.register(this);
    }


    @Override
    public void terminate() {
        // 设置标志实例对象为true
        System.out.println("设置中断标志对象为中断状态");
        this.terminationToken.setToShutdown(true);

        try {
            doTerminate();
        } finally {
            // 如果没有等待的任务，则强制去停止线程
            if (terminationToken.reservations.get() <= 0) {
                super.interrupt();
            }
        }
    }

    /**
     * 执行终止线程的逻辑 留个子类去具体的实现
     */
    protected void doTerminate() {

    }

    /**
     * 终止线程执行
     */
    @Override
    public void run() {
        Exception ex = null;
        try {
            for (; ; ) {
                // 死循环 先判断中断实例的标识是否为true，同时没有未完成的任务
                System.out.println("告警线程执行，此时中断标志位：" + terminationToken.isToShutdown() + ", 未完成的任务数量：" + terminationToken.reservations.get());
                if (terminationToken.isToShutdown() && terminationToken.reservations.get() <= 0) {
                    // 线程已经终止了 中断线程退出
                    System.out.println("中断标志为true，未完成任务为0，告警线程退出");
                    break;
                }

                // 执行具体的业务逻辑
                doRun();
            }
        } catch (Exception e) {
            // 中断线程可能给调用interrupt被中断
            ex = e;
            if (e instanceof InterruptedException) {
                // 中断线程响应退出
                System.out.println("中断响应：" + e);
            }
        } finally {
            try {
                System.out.println("告警线程停止，回调终止后的清理工作");
                doCleanup(ex);
            } finally {
                // 通知terminationToken管理的所有线程实例进行退出
                System.out.println("标志实例对象中一个线程终止，通知其他线程终止");
                terminationToken.notifyThreadTermination(this);
            }
        }
    }

    /**
     * 留给子类去实现，完成线程终止后的一些清理动作
     *
     * @param ex
     */
    protected void doCleanup(Exception ex) {

    }

    /**
     * 留给子类去实现具体的线程业务逻辑
     */
    protected abstract void doRun() throws InterruptedException;
}