package com.wangchenguang.mockito.lesson4;

import org.junit.After;
import org.junit.Before;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.mockito.internal.matchers.InstanceOf;
import org.mockito.invocation.InvocationOnMock;
import org.mockito.runners.MockitoJUnitRunner;
import org.mockito.stubbing.Answer;

import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.List;

import static org.hamcrest.CoreMatchers.equalTo;
import static org.hamcrest.CoreMatchers.instanceOf;
import static org.junit.Assert.assertThat;
import static org.junit.Assert.fail;
import static org.mockito.Matchers.anyInt;
import static org.mockito.Mockito.*;

/**
 * @author wcg
 * @CreateDate 2020/4/30-21:48
 */

@RunWith(MockitoJUnitRunner.class)
public class StubbingTest {

    private List<String> list;


    @Before
    public void init(){
        this.list = mock(ArrayList.class);
    }

    @Test
    public void howToUseStubbing(){
        when(list.get(0)).thenReturn("first");
        assertThat(list.get(0),equalTo("first"));

        when(list.get(anyInt())).thenThrow(new RuntimeException());

        try {
            list.get(0);
            fail();
        }catch (Exception e){
            assertThat(e, instanceOf(RuntimeException.class));

        }
    }


    @Test
    public void howToStubbingVoidMethod(){

        doNothing().when(list).clear();
        list.clear();

        verify(list,times(1)).clear();

        doThrow(new RuntimeException()).when(list).clear();

        try {
            list.clear();
            fail();
        }catch (Exception e){

            assertThat(e,instanceOf(RuntimeException.class));
        }

    }


    @Test
    public void stubbingDoReturn(){
        when(list.get(0)).thenReturn("first");
        doReturn("second").when(list).get(1);
        String first = list.get(0);
        System.out.println(first);

        assertThat(list.get(0),equalTo("first"));
        assertThat(list.get(1),equalTo("second"));

    }


    @Test
    public void iterateStubbing(){
//        when(list.size()).thenReturn(1,2,3,4);
        when(list.size()).thenReturn(1).thenReturn(2).thenReturn(3).thenReturn(4);//和上面那条语句等价

        assertThat(list.size(),equalTo(1));

        System.out.println(list.size());
        System.out.println(list.size());
        System.out.println(list.size());

    }


    @Test
    public void stubbingWitnAnser(){
//        when(list.get(anyInt())).thenAnswer(new Answer<String>() {
//
//                                                @Override
//                                                public String answer(InvocationOnMock invocationOnMock) throws Throwable {
//                                                    return null;
//                                                }
//                                            }
//        );
        when(list.get(anyInt())).thenAnswer(invocationOnMock -> {
                Integer index = invocationOnMock.getArgumentAt(0,Integer.class);
                return String.valueOf(index*10);
        });

        assertThat(list.get(0),equalTo("0"));
        assertThat(list.get(999),equalTo("9990"));


    }



    @Test
    public void subbingWithRealCall(){
        StubbingService service = mock(StubbingService.class);
//        System.out.println(service.getClass());
        when(service.getStr()).thenReturn("wcg");

        assertThat(service.getStr(),equalTo("wcg"));
        when(service.getI()).thenCallRealMethod();
        assertThat(service.getI(),equalTo(10));




    }



    @After
    public void destroy(){
        reset(this.list);
    }




}
