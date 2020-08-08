package com.wangchenguang.mockito.lesson08;

import org.junit.After;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.mockito.Mock;
import org.mockito.runners.MockitoJUnitRunner;

import java.io.Serializable;
import java.util.Collection;
import java.util.Collections;

import static org.hamcrest.core.IsEqual.equalTo;
import static org.junit.Assert.assertThat;
import static org.mockito.Matchers.*;
import static org.mockito.Mockito.*;


/**
 * @author wcg
 * @CreateDate 2020/5/1-20:01
 */

@RunWith(MockitoJUnitRunner.class)
public class WildcardArgumentMartcherTest {

    @Mock
    private SimpleService simpleService;


    @Test
    public void waldcardMethod1(){

        when(simpleService.method1(anyInt(),anyString(),anyCollection(),isA(Serializable.class))).thenReturn(100);

        int result = simpleService.method1(1,"wcg", Collections.EMPTY_LIST,"Mockito");

        assertThat(result,equalTo(100));

         result = simpleService.method1(1,"Alex", Collections.EMPTY_SET,"MockitoForJava");

        assertThat(result,equalTo(100));
    }


    @Test
    public void waldcardMethod2(){

        doNothing().when(simpleService).method2(anyInt(),anyString(),anyCollection(),isA(Serializable.class));
         simpleService.method2(1,"wcg", Collections.EMPTY_LIST,"Mockito");


        verify(simpleService,times(1)).method2(1,"wcg", Collections.EMPTY_LIST,"Mockito");
        verify(simpleService,times(1)).method2(anyInt(),anyString(), anyCollection(),isA(Serializable.class));



    }



    //����׮��ʱ�򷽷��в�������ƥ������ʱ��������в�������ƥ����  ���ܰ���ֱ����ֵ ���磺 1 2 "test" �������ƥ�䷽��eq()
    @Test
    public void wildcardWithSpec(){

        when(simpleService.method1(anyInt(),eq("wcg"),anyCollection(),isA(Serializable.class))).thenReturn(100);
        when(simpleService.method1(anyInt(),eq("alex"),anyCollection(),isA(Serializable.class))).thenReturn(200);
        when(simpleService.method1(anyInt(),anyString(),anyCollection(),isA(Serializable.class))).thenReturn(-1);  //���д�������������������ǵ�


        int result = simpleService.method1(1,"wcg", Collections.EMPTY_LIST,"Mockito");

        assertThat(result,equalTo(100));

        result = simpleService.method1(1,"alex", Collections.EMPTY_SET,"MockitoForJava");

        assertThat(result,equalTo(200));


    }


//    @After
    public void destroy(){
       reset(simpleService);
    }



}
