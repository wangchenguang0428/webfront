package com.mine;

import org.aspectj.lang.JoinPoint;

public class ValidateAspect {
    public void beforeMethod(JoinPoint point){
        System.out.println("验证前置通知： "+point.getSignature().getName());
    }
}