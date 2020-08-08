package com.wangchenguang.mockito.lesson08;

import java.io.Serializable;
import java.util.Collection;

/**
 * @author wcg
 * @CreateDate 2020/5/1-20:08
 */
public class SimpleService {

    public int method1(int i, String s, Collection<?> c, Serializable ser){
        throw new RuntimeException();
    }



    public void method2(int i, String s, Collection<?> c, Serializable ser){
        throw new RuntimeException();
    }
}
