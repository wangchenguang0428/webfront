package com.wangchenguang.mockito.lesson10;

import org.junit.Test;

import static org.hamcrest.CoreMatchers.both;
import static org.junit.Assert.assertThat;

/**
 * @author wcg
 * @CreateDate 2020/5/2-8:10
 */
public class SimpleTest {


    @Test
    public void test(){
//        assertThat(1,lt(3));
//
//        assertThat(10,gt(5));
//
//        assertThat(15,both(gt(10)).and(13));

        assertThat(10,GreaterThan.gt(5));




    }
}
