package com.wangchenguang.mockito.lesson06;

import org.junit.Before;
import org.junit.Test;
import org.mockito.MockitoAnnotations;
import org.mockito.Spy;

import java.util.ArrayList;
import java.util.List;

import static org.hamcrest.core.IsEqual.equalTo;
import static org.junit.Assert.assertThat;
import static org.mockito.Mockito.when;

/**
 * @author wcg
 * @CreateDate 2020/5/1-10:45
 */
public class SpyingAnnotaionTest {



    @Spy
    private List<String> list = new ArrayList<>();

    @Before
    public void init(){
        MockitoAnnotations.initMocks(this);

    }


    @Test
    public void testSpy(){
        list.add("Mockito");
        list.add("PowerMock");

        when(list.isEmpty()).thenReturn(true);
        when(list.size()).thenReturn(0);

        assertThat(list.get(0), equalTo("Mockito"));
        assertThat(list.get(1), equalTo("PowerMock"));
        assertThat(list.isEmpty(),equalTo(true));
        assertThat(list.size(),equalTo(0));

    }


}
