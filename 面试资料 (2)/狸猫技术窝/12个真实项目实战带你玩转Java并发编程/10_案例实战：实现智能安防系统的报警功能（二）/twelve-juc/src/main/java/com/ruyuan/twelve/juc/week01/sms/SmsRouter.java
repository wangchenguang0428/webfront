package com.ruyuan.twelve.juc.week01.sms;

import java.util.Collections;
import java.util.HashMap;
import java.util.Map;

/**
 * @author <a href="mailto:little@163.com">little</a>
 * version: 1.0
 * Description:短信网关维护的手机发对应的短信中心的路由信息 不可变对象
 * <p>
 * 比如手机号 180开头的-->短信中心编号为 001,手机号 181开头的-->短信中心编号为 002,手机号 182开头的-->短信中心编号为 003
 **/
public class SmsRouter {

    /**
     * 短信网关对象,通过volatile修饰来保证其他线程的可见性
     */
    private static volatile SmsRouter instance = new SmsRouter();

    /**
     * 短信中心路由信息的map
     */
    private final Map<String, SmsInfo> smsInfoRouteMap;

    /**
     * 初始化短信网关路由信息
     */
    public SmsRouter() {
        // 从数据库中维护的路由信息加载到jvm内存中
        this.smsInfoRouteMap = this.loadSmsInfoRouteMapFromDb();
    }

    /**
     * 短信路由中心表变更,更新短信网关
     *
     * @param newInstance 短信网关
     */
    public static void setInstance(SmsRouter newInstance) {
        instance = newInstance;
    }

    /**
     * 从数据库加载短信中心的路由信息
     *
     * @return 短信中心的路由信息
     */
    private Map<String, SmsInfo> loadSmsInfoRouteMapFromDb() {
        // 初始化 模拟db的数据
        Map<String, SmsInfo> routeMap = new HashMap<>();
        routeMap.put("180", new SmsInfo("001", "http://www.baidu.com", 180L));
        routeMap.put("181", new SmsInfo("002", "http://www.biying.com", 181L));
        routeMap.put("182", new SmsInfo("003", "http://www.google.com", 182L));
        return routeMap;
    }

    /**
     * 获取短信网关对象
     *
     * @return
     */
    public static SmsRouter getInstance() {
        return instance;
    }

    /**
     * 根据手机号前缀来获取短信中心
     *
     * @param phoneNumberPrefix 手机号的前缀
     * @return 短信中心
     */
    public SmsInfo getSmsInfoByPhoneNumberPrefix(String phoneNumberPrefix) {
        return smsInfoRouteMap.get(phoneNumberPrefix);
    }

    /**
     * 获取路由信息
     *
     * @return 路由信息 key:手机号前缀 value:短信中心
     */
    public Map<String, SmsInfo> getRouteMap() {
        // 防止对短信路由信息更改 进行防御性的复制
        return Collections.unmodifiableMap(deepCopy(smsInfoRouteMap));
    }

    private Map<String, SmsInfo> deepCopy(Map<String, SmsInfo> smsInfoRouteMap) {
        HashMap<String, SmsInfo> result = new HashMap<>();
        for (String key : smsInfoRouteMap.keySet()) {
            result.put(key, new SmsInfo(smsInfoRouteMap.get(key)));
        }
        return result;
    }
}