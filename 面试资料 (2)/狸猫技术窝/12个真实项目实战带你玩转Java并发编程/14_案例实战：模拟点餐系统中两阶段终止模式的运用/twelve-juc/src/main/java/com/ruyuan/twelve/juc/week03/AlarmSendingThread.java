package com.ruyuan.twelve.juc.week03;

import java.util.Objects;
import java.util.concurrent.ArrayBlockingQueue;
import java.util.concurrent.BlockingQueue;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.atomic.AtomicInteger;

/**
 * @author <a href="mailto:little@163.com">little</a>
 * version: 1.0
 * Description:上报机器报警信息的工作线程
 **/
public class AlarmSendingThread extends AbstractTerminationThread {

    /**
     * 机器告警队列
     */
    private final BlockingQueue<AlarmInfo> alarmQueues;

    /**
     * 已经提交的机器告警信息
     */
    private final ConcurrentHashMap<String, AtomicInteger> submittedAlarmRegistry;

    public AlarmSendingThread() {
        // 机器告警队列
        this.alarmQueues = new ArrayBlockingQueue<>(100);
        this.submittedAlarmRegistry = new ConcurrentHashMap<>();
    }

    /**
     * 发送机器告警信息
     *
     * @param alarmInfo 机器告警信息
     * @return 重复提交当前告警信息的数量
     */
    public int sendAlarm(AlarmInfo alarmInfo) {
        if (terminationToken.isToShutdown()) {
            // 已终止
            System.err.println("reject alarm:" + alarmInfo);
            return -1;
        }

        try {
            // 放入到机器告警队列中
            AtomicInteger prevSubmittedCounter;
            prevSubmittedCounter = submittedAlarmRegistry.putIfAbsent(alarmInfo.getUniqueId(), new AtomicInteger());
            if (prevSubmittedCounter == null) {
                // 代表之前该类型的机器告警为空
                // 未完成的任务+1
                terminationToken.reservations.incrementAndGet();
                // 放入到机器告警队列中
                alarmQueues.put(alarmInfo);
            } else {
                // 当前的故障还没有恢复，不需要重复上报机器告警，只是增加机器告警数量的次数
                return prevSubmittedCounter.incrementAndGet();
            }
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        return 0;
    }

    @Override
    protected void doRun() throws InterruptedException {
        // 执行业务逻辑 从机器告警队列中取机器告警信息，上报到监控系统中
        AlarmInfo alarmInfo;
        alarmInfo = alarmQueues.take();
        System.out.println("告警线程从队列中拉取到告警信息：" + alarmInfo);

        // 机器告警任务数量-1
        terminationToken.reservations.decrementAndGet();

        // 发送机器告警信息到智慧监控系统中
        try {
            doSendAlarm();
            System.out.println("机器告警信息：" + alarmInfo + "上报完成");
        } catch (Exception e) {
            e.printStackTrace();
        }

        // 如果当前告警类型是恢复告警，则需要清空当前告警的统计信息重置为空
        if (Objects.equals(alarmInfo.getAlarmType(), AlarmType.RESUME)) {
            System.out.println("机器告警：" + alarmInfo + "已恢复，清空告警次数");
            submittedAlarmRegistry.remove(alarmInfo.getUniqueIdByAlarmType(AlarmType.FAULT));
            submittedAlarmRegistry.remove(alarmInfo.getUniqueIdByAlarmType(AlarmType.RESUME));
        }
    }

    /**
     * 上报机器告警信息到智慧监控系统中
     */
    private void doSendAlarm() {
        // 这里通过socket的方式上报到智慧监控系统中
        // 模拟调用
        try {
            Thread.sleep(50);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }

}