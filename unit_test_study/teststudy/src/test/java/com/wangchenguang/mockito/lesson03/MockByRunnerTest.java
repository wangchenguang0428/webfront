package com.wangchenguang.mockito.lesson03;

import com.wangchenguang.mockito.common.Account;
import com.wangchenguang.mockito.common.AccountDao;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.mockito.Mockito;
import org.mockito.runners.MockitoJUnitRunner;

import static org.mockito.Mockito.mock;

/**
 * @author wcg
 * @CreateDate 2020/4/25-18:23
 */

@RunWith(MockitoJUnitRunner.class)
public class MockByRunnerTest {


    @Test
    public void testMock(){

        AccountDao accountDao = mock(AccountDao.class, Mockito.RETURNS_SMART_NULLS);
        Account account = accountDao.findAccount("test","123");


        System.out.println(account);



    }



}
