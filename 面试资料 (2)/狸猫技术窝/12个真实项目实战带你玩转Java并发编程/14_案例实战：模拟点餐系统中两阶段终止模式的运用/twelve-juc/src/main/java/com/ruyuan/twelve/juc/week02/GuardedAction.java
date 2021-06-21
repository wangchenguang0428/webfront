package com.ruyuan.twelve.juc.week02;

import java.util.concurrent.Callable;

/**
 * @author <a href="mailto:little@163.com">little</a>
 * version: 1.0
 * Description:抽象目标动作，内部包含目标动作所需的保护条件
 **/
public abstract class GuardedAction<V> implements Callable<V> {

    /**
     * 保护条件
     */
    protected final Predicate predicate;

    public GuardedAction(Predicate predicate) {
        this.predicate = predicate;
    }
}