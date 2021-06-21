package com.ruyuan.twelve.juc.week03;

/**
 * @author <a href="mailto:little@163.com">little</a>
 * version: 1.0
 * Description:
 **/
public enum AlarmType {

    /**
     * 故障
     */
    FAULT(1, "故障"),

    /**
     * 恢复告警
     */
    RESUME(2, "刷新");

    private Integer alarmType;

    private String desc;

    AlarmType(Integer alarmType, String desc) {
        this.alarmType = alarmType;
        this.desc = desc;
    }

    public Integer getAlarmType() {
        return alarmType;
    }

    public String getDesc() {
        return desc;
    }
}
