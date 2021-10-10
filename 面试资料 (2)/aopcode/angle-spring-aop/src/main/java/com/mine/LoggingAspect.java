package com.mine;

import org.aspectj.lang.JoinPoint;
import org.aspectj.lang.ProceedingJoinPoint;
import org.aspectj.lang.annotation.After;
import org.aspectj.lang.annotation.AfterReturning;
import org.aspectj.lang.annotation.AfterThrowing;


public class LoggingAspect {

    public void beforeMethod(JoinPoint point){
        System.out.println("正在执行方法： "+point.getSignature().getName());
    }


    public void afterMethod(JoinPoint point){
        System.out.println("方法执行结束： "+point.getSignature().getName());
    }


    public void afterReturningMethod(JoinPoint point,Object retVal){
        System.out.println("方法： "+point.getSignature().getName()+"执行结果为："+retVal);
    }


    public void afterThrowingMethod(JoinPoint point,Exception ex){
        System.out.println("执行方法： "+point.getSignature().getName()+"出现了异常："+ex.getMessage());
    }

    public Object aroundMethod(ProceedingJoinPoint point){

        System.out.println("环绕通知： "+point.getSignature().getName());
        Object result=null;
        //这里相当于前置通知
        try {
            //执行方法
            result= point.proceed();
            //这里相当于结果通知
        } catch (Throwable e) {
            //这里相当于异常通知
            e.printStackTrace();

        }
        //这里相当于后置通知
        System.out.println("环绕通知： "+point.getSignature().getName());
        return result;
    }
}