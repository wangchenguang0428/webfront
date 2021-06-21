package com.ruyuan.twelve.juc.week01.sms;

/**
 * @author <a href="mailto:little@163.com">little</a>
 * version: 1.0
 * Description:与客服中心对接的后台线程,当客服中心通过socket发送过来一个变更的请求时,重新设置短信中心路由网关的信息
 **/
public class CustomerCenterThread extends Thread {

    @Override
    public void run() {
        /**
         * 路由信息是否改变
         */
        boolean isChangeRouteInfo = false;

        while (true) {
            /**
             * 读取与客服中心连接的socketChannel中的数据,然后判断是否发生了改变
             * 因为短信中心的路由信息是很少进行改变的
             *
             */
            if (isChangeRouteInfo) {
                // 如果改变了 重置短信网关
                SmsRouter.setInstance(new SmsRouter());
            }
        }
    }
}