package com.ruyuan.twelve.juc.week01.sms;

/**
 * @author <a href="mailto:little@163.com">little</a>
 * version: 1.0
 * Description:短信中心  不可变对象
 **/
public final class SmsInfo {

    /**
     * 设备编号
     */
    private final String deviceCode;

    /**
     * 短信中心的url
     */
    private final String url;

    /**
     * 短信内容最多多少个字节
     */
    private final Long maxSizeInBytes;

    public SmsInfo(String deviceCode, String url, Long maxSizeInBytes) {
        this.deviceCode = deviceCode;
        this.url = url;
        this.maxSizeInBytes = maxSizeInBytes;
    }

    /**
     * 初始化
     *
     * @param smsInfo 短信中心
     */
    public SmsInfo(SmsInfo smsInfo) {
        this.deviceCode = smsInfo.getDeviceCode();
        this.url = smsInfo.getUrl();
        this.maxSizeInBytes = smsInfo.getMaxSizeInBytes();
    }

    public String getDeviceCode() {
        return deviceCode;
    }

    public String getUrl() {
        return url;
    }

    public Long getMaxSizeInBytes() {
        return maxSizeInBytes;
    }
}