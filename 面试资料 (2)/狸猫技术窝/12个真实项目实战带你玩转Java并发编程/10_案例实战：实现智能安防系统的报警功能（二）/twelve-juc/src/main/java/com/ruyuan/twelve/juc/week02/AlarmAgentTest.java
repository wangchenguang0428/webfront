package com.ruyuan.twelve.juc.week02;

/**
 * @author <a href="mailto:little@163.com">little</a>
 * version: 1.0
 * Description:测试小区报警服务上次报警信息到报警服务器
 **/
public class AlarmAgentTest {

    public static void main(String[] args) throws Exception {
        AlarmAgent alarmAgent = new AlarmAgent();
        alarmAgent.init();

        AlarmInfo alarmInfo = new AlarmInfo(6, 2, "1101", 1);
        alarmAgent.sendAlarm(alarmInfo);
    }
}