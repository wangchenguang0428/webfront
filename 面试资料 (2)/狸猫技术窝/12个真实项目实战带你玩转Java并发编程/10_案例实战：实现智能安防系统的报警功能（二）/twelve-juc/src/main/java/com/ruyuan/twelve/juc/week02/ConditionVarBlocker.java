package com.ruyuan.twelve.juc.week02;

import java.util.concurrent.Callable;
import java.util.concurrent.locks.Condition;
import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;

/**
 * @author <a href="mailto:little@163.com">little</a>
 * version: 1.0
 * Description:基于jdk中condition条件变量实现的blocker
 **/
public class ConditionVarBlocker implements Blocker {

    /**
     * lock 锁
     */
    private final Lock lock;

    /**
     * 条件变量
     */
    private final Condition condition;

    /**
     * 是否允许获取当前blocker的锁
     */
    private final boolean allowAccess2Lock;

    public ConditionVarBlocker(Lock lock, Condition condition, boolean allowAccess2Lock) {
        this.lock = lock;
        this.condition = condition;
        this.allowAccess2Lock = allowAccess2Lock;
    }

    public ConditionVarBlocker(boolean allowAccess2Lock) {
        this(new ReentrantLock(), allowAccess2Lock);
    }

    public ConditionVarBlocker(Lock lock, boolean allowAccess2Lock) {
        this.lock = lock;
        this.condition = lock.newCondition();
        this.allowAccess2Lock = allowAccess2Lock;
    }

    @Override
    public <V> V callWithGuard(GuardedAction<V> guardedAction) throws Exception {
        lock.lockInterruptibly();
        try {
            // 判断条件是否满足，满足则执行目标动作，不满足则进入到条件等待队列中
            final Predicate predicate = guardedAction.predicate;
            while (!predicate.evaluate()) {
                System.out.println("alarm connecting alarm system，thread wait");
                // 条件不满足
                condition.await();

                // 当线程从条件等待队列欢迎后，获取锁成功，然后再次尝试去判断条件是否满足
            }

            // 条件满足，执行目标内容
            System.out.println("alarm connected execute call");
            return guardedAction.call();
        } finally {
            lock.unlock();
        }
    }

    @Override
    public void signalAfter(Callable<Boolean> stateOperation) throws Exception {
        lock.lockInterruptibly();
        try {
            if (stateOperation.call()) {
                // 条件满足唤醒
                System.out.println("alarm connected ,signal thread ");
                condition.signal();
            }
        } finally {
            lock.unlock();
        }
    }

    @Override
    public void signal() throws Exception {
        lock.lockInterruptibly();
        try {
            condition.signal();
        } finally {
            lock.unlock();
        }
    }

    @Override
    public void broadcastAfter(Callable<Boolean> stateOperation) throws Exception {
        lock.lockInterruptibly();
        try {
            if (stateOperation.call()) {
                // 条件满足唤醒所有等待线程
                condition.signalAll();
            }
        } finally {
            lock.unlock();
        }
    }

    /**
     * 获取锁
     *
     * @return 结果
     */
    public Lock getLock() {
        if (allowAccess2Lock) {
            return this.lock;
        }
        throw new IllegalStateException("access to the lock disallowed");
    }
}