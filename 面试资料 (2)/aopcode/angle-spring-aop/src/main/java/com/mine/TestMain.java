package com.mine;

import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

/**
 * @author wcg
 * @CreateDate 2021/10/2-13:59
 */
public class TestMain {
    public static void main(String[] args) {
        ApplicationContext ctx=new ClassPathXmlApplicationContext("applicationContext.xml");
        ArithmeticCalculator calc=(ArithmeticCalculator) ctx.getBean("arithmeticCalculator");
        System.out.println(calc.add(3, 5));
    }


}
