package com.ruyuan.twelve.juc.week01.demo;

/**
 * @author <a href="mailto:little@163.com">little</a>
 * version: 1.0
 * Description:飞机位置更新的test
 **/
public class PlaneTest {

    public static void main(String[] args) {
        PlaneTracker planeTracker = new PlaneTracker();

        // 飞机的地理
        Location firstLocation = new Location(1, 2);
        Location secondLocation = new Location(2, 3);

        // 可能多个线程同时来更新,如果只有一个location的对象,那么可能x坐标成功了但是y坐标失败导致数据不正确
        planeTracker.updateLocation("001", firstLocation);

        planeTracker.updateLocation("001", secondLocation);
    }
}