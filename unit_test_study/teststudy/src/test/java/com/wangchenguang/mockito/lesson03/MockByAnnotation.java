package com.wangchenguang.mockito.lesson03;

import com.wangchenguang.mockito.common.Account;
import com.wangchenguang.mockito.common.AccountDao;
import org.junit.Before;
import org.junit.Test;
import org.mockito.Answers;
import org.mockito.Mock;
import org.mockito.Mockito;
import org.mockito.MockitoAnnotations;

/**
 * @author wcg
 * @CreateDate 2020/4/25-20:40
 */
public class MockByAnnotation {


    @Before
    public void init(){
        MockitoAnnotations.initMocks(this);
    }

    @Mock(answer = Answers.RETURNS_SMART_NULLS)
    private AccountDao accountDao;

    @Test
    public void testMock(){
        Account account = accountDao.findAccount("x","x");
        System.out.println(account);

    }

}
