package com.wangchenguang.mockito.lesson07;


import javafx.scene.Parent;
import org.junit.Test;
import org.mockito.Mockito;

import javax.tools.ForwardingFileObject;
import java.util.ArrayList;
import java.util.List;

import static org.hamcrest.core.IsEqual.equalTo;
import static org.hamcrest.core.IsNull.nullValue;
import static org.junit.Assert.assertThat;
import static org.mockito.Mockito.*;

/**
 * @author wcg
 * @CreateDate 2020/5/1-14:09
 */
public class ArgumentsMartcherTest {




    @Test
    public void basicTest(){
        List<Integer> list = mock(ArrayList.class);
        when(list.get(eq(0))).thenReturn(100);
        assertThat(list.get(0),equalTo(100));
        assertThat(list.get(1),nullValue());

    }


    /*
     *  isA() anyXXX()
     */
    @Test
    public void testComplex(){
        Foo foo = mock(Foo.class);
        when(foo.function(isA(Child1.class))).thenReturn(100);
        int result = foo.function(new Child1());
        assertThat(result,equalTo(100));

        result = foo.function(new Child2());
        assertThat(result,equalTo(0));


        reset(foo);


        //isA是更精确的类  any只是去检查符合泛型
        when(foo.function(Mockito.any(Child1.class))).thenReturn(100);
        result = foo.function(new Child2());
        assertThat(result,equalTo(100));




    }


    static class Foo{
        int function(Parent p){
            return p.work();
        }

    }

    interface Parent{
        int work();
    }

    class Child1 implements Parent{
        @Override
        public int work() {
            throw new RuntimeException();
        }
    }


    class Child2 implements Parent{
        @Override
        public int work() {
            throw new RuntimeException();
        }
    }



}
