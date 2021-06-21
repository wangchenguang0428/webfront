package com.ruyuan.twelve.juc.week03;

import java.lang.ref.WeakReference;
import java.util.Queue;
import java.util.concurrent.ConcurrentLinkedQueue;
import java.util.concurrent.atomic.AtomicInteger;

/**
 * @author <a href="mailto:little@163.com">little</a>
 * version: 1.0
 * Description:线程停止标志
 **/
public class TerminationToken {

    /**
     * 通过volatile来修饰，无锁的请求下当数据修改后其他线程可以读取到，是否停止标志
     */
    protected volatile boolean toShutdown = false;

    /**
     * 未执行的任务的数量
     */
    public final AtomicInteger reservations = new AtomicInteger(0);

    /**
     * 当多个线程共享一个terminationToken实例时，通过队列的方式来记录所有的停止线程，减少锁的方式来实现
     */
    private final Queue<WeakReference<Termination>> coordinatedThreads;

    public TerminationToken() {
        this.coordinatedThreads = new ConcurrentLinkedQueue<>();
    }

    /**
     * 是否终止
     *
     * @return
     */
    public boolean isToShutdown() {
        return toShutdown;
    }

    public void setToShutdown(boolean toShutdown) {
        this.toShutdown = toShutdown;
    }

    /**
     * 注册一个线程到terminationToken上
     *
     * @param thread 线程
     */
    public void register(Termination thread) {
        coordinatedThreads.add(new WeakReference<>(thread));
    }

    /**
     * 通知terminationToken中所有实例，有一个线程停止了，通知其他线程也停止
     *
     * @param thread
     */
    public void notifyThreadTermination(Termination thread) {
        WeakReference<Termination> wrThread;
        Termination otherThread;

        while ((wrThread = coordinatedThreads.poll()) != null) {
            otherThread = wrThread.get();
            if (otherThread != null && otherThread != thread) {
                otherThread.terminate();
            }
        }
    }
}