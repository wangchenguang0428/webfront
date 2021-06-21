package com.ruyuan.twelve.juc.week01.demo;

import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/**
 * @author <a href="mailto:little@163.com">little</a>
 * version: 1.0
 * Description:飞机的位置跟踪器
 **/
public class PlaneTracker {

    /**
     * 飞机的位置维护
     */
    private Map<String, Location> locationMap = new ConcurrentHashMap<>();

    /**
     * 更新飞机的位置信息
     *
     * @param planeCode 飞机编号
     * @param location  位置信息
     */
    public void updateLocation(String planeCode, Location location) {
        locationMap.put(planeCode, location);
    }
}