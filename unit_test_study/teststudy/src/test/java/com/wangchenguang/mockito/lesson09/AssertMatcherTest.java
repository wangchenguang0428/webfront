package com.wangchenguang.mockito.lesson09;

import org.junit.Assert;
import org.junit.Test;

import java.util.stream.Stream;

import static org.hamcrest.CoreMatchers.*;
import static org.junit.Assert.assertThat;

/**
 * @author wcg
 * @CreateDate 2020/5/2-7:19
 */
public class AssertMatcherTest {


    //matcher里面可以包含其他matcher
    @Test
    public void test(){
        int i =10;
        assertThat(i,equalTo(10));


        Assert.assertEquals(i,10);

        assertThat(i,not(equalTo(20)));


        assertThat(i,is(10));

        assertThat(i,is(not(20)));



    }


    @Test
    public void test2(){
        double price = 23.45;


        //两个 一个通过就行
        assertThat(price,either(equalTo(23.45)).or(equalTo(23.54)));
        //两个都要通过
        assertThat(price,both(equalTo(23.45)).and(not(equalTo(23.54))));

        //几个情况中的任意一个
        assertThat(price,anyOf(is(23.45),is(23.54),is(53.24),not(35.42)));


        assertThat(price,anyOf(is(23.45),not(is(23.54)),not(is(53.24)),not(35.42)));

        assertThat(Stream.of(1,2,3).anyMatch(i->i>0),equalTo(true));
        assertThat(Stream.of(1,2,3).allMatch(i->i>0),equalTo(true));
    }



    @Test
    public void test3(){
        double price = 23.45;


        // 失败的话可以加说明
        assertThat("the double asssertion failed",price,either(equalTo(23.46)).or(equalTo(23.54)));

    }



}
