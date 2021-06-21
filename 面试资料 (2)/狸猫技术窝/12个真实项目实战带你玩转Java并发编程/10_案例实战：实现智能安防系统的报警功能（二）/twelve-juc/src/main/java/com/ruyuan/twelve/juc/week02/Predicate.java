package com.ruyuan.twelve.juc.week02;

/**
 * @author <a href="mailto:little@163.com">little</a>
 * version: 1.0
 * Description:条件
 **/
public interface Predicate {

    /**
     * 判断条件是否满足，满足返回true否则false
     *
     * @return true：满足 false：不满足
     */
    boolean evaluate();

}