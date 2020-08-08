package com.wangchenguang.mockito.lesson4;

/**
 * @author wcg
 * @CreateDate 2020/5/1-9:39
 */
public class StubbingService {



    public int getI(){
        System.out.println("========getI======");
        return 10;
    }

    public String getStr(){
        System.out.println("===========getS============");
        throw new RuntimeException();

    }

}
