package com.ruyuan.twelve.juc.week03;

/**
 * @author <a href="mailto:little@163.com">little</a>
 * version: 1.0
 * Description:机器告警信息
 **/
public class AlarmInfo {

    /**
     * 机器告警类型 {@link AlarmType}
     */
    private AlarmType alarmType;

    /**
     * 机器告警编号
     */
    private String id;

    /**
     * 机器告警参数
     */
    private String extraInfo;

    public AlarmInfo(AlarmType alarmType, String id, String extraInfo) {
        this.alarmType = alarmType;
        this.id = id;
        this.extraInfo = extraInfo;
    }

    public AlarmType getAlarmType() {
        return alarmType;
    }

    public void setAlarmType(AlarmType alarmType) {
        this.alarmType = alarmType;
    }

    public String getId() {
        return id;
    }

    public void setId(String id) {
        this.id = id;
    }

    public String getExtraInfo() {
        return extraInfo;
    }

    public void setExtraInfo(String extraInfo) {
        this.extraInfo = extraInfo;
    }

    @Override
    public String toString() {
        return "AlarmInfo{" +
                "alarmType=" + alarmType +
                ", id='" + id + '\'' +
                ", extraInfo='" + extraInfo + '\'' +
                '}';
    }

    /**
     * 机器告警信息的唯一id
     *
     * @return 唯一的id
     */
    public String getUniqueId() {
        return this.alarmType.getDesc() + ":" + this.id + ":" + this.getExtraInfo();
    }

    /**
     * 根据告警类型获取唯一的id
     *
     * @param alarmType 告警类型 {@link AlarmType
     * }
     * @return
     */
    public String getUniqueIdByAlarmType(AlarmType alarmType) {
        return alarmType.getDesc() + ":" + this.id + ":" + this.extraInfo;
    }
}