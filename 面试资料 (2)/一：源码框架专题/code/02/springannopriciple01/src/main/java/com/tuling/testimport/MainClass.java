package com.tuling.testimport;

import com.tuling.testimport.config.MainConfig;
import org.springframework.context.annotation.AnnotationConfigApplicationContext;

import java.util.Optional;

/**
 * Created by smlz on 2019/5/20.
 */
public class MainClass {

    public static void main(String[] args) {
/*        AnnotationConfigApplicationContext ctx = new AnnotationConfigApplicationContext(MainConfig.class);
        for(String beanName:ctx.getBeanDefinitionNames()) {
            System.out.println("beanName:"+beanName);
        }*/



    }

    public static void test() {
        System.out.println("OK");
    }
}
