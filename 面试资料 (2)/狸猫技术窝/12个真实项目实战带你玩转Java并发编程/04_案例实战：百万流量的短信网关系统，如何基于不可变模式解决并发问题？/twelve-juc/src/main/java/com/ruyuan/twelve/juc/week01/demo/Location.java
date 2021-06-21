package com.ruyuan.twelve.juc.week01.demo;

/**
 * @author <a href="mailto:little@163.com">little</a>
 * version: 1.0
 * Description:飞机地理位置 声明为不可变的类
 **/
public final class Location {

    private final double x;

    private final double y;

    public Location(double x, double y) {
        this.x = x;
        this.y = y;
    }
}