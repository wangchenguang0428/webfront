package com.wangchenguang.mockito.lesson10;

import org.hamcrest.BaseMatcher;
import org.hamcrest.Description;
import org.hamcrest.Factory;

/**
 * @author wcg
 * @CreateDate 2020/5/2-8:08
 */
public class GreaterThan<T extends Number> extends BaseMatcher<T> {

    private final T value;

    public GreaterThan(T value) {
        this.value = value;
    }


    @Override
    public boolean matches(Object actual) {

        Class<?> clazz = actual.getClass();

        if(clazz==Integer.class){

            return (Integer)actual > (Integer)value;

        }else if(clazz == Short.class){
            return (Short)actual > (Short)value;
        }else{
            throw new AssertionError("the number type " + clazz + " not supported");

        }

    }


    @Factory
    public static <T extends Number> GreaterThan<T> gt(T value){

        return new GreaterThan<T>(value);
    }


    @Override
    public void describeTo(Description description) {
        description.appendText("compare two number failed");
    }
}
