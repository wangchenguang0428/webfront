package com.ruyuan.twelve.juc.week03;

/**
 * @author <a href="mailto:little@163.com">little</a>
 * version: 1.0
 * Description:
 * 案例的背景：智慧制造监控系统，会自动对机器来进行监控，机器的报警信息会上报到监控系统中
 **/
public class AlarmManager {

    /**
     * 是否关闭
     */
    private volatile boolean shutdownRequested = false;

    /**
     * 单例对象
     */
    private static final AlarmManager INSTANCE = new AlarmManager();

    /**
     * 上报机器的报警信息的工作线程
     */
    private final AlarmSendingThread alarmSendingThread;

    /**
     * 私有发构造方法
     */
    private AlarmManager() {
        System.out.println("创建机器上报告警信息的后台线程");
        alarmSendingThread = new AlarmSendingThread();
    }

    /**
     * 获取单例对象
     *
     * @return 报警功能管理组件
     */
    public static AlarmManager getInstance() {
        return INSTANCE;
    }

    /**
     * 初始化
     */
    public void init() {
        alarmSendingThread.start();
    }

    /**
     * 发送机器告警信息
     *
     * @param alarmType 机器告警类型 {@link AlarmType}
     * @param id        机器告警编号
     * @param extraInfo 机器告警参数
     * @return 当前机器告警重复的数量，如果是-1表示机器告警管理组件已经关闭
     */
    public int sendAlarm(AlarmType alarmType, String id, String extraInfo) {
        AlarmInfo alarmInfo = new AlarmInfo(alarmType, id, extraInfo);
        // 重复提交的数量
        int duplicateSubmissionCount = 0;
        try {
            duplicateSubmissionCount = alarmSendingThread.sendAlarm(alarmInfo);
        } catch (Exception e) {
            e.printStackTrace();
        }
        return duplicateSubmissionCount;
    }

    /**
     * 关闭机器上报功能
     */
    public synchronized void shutdown() {
        if (shutdownRequested) {
            throw new IllegalStateException("shutdown already requested!");
        }

        // 关闭告警后台线程
        alarmSendingThread.terminate();
        shutdownRequested = true;
    }
}