package com.wangchenguang.mockito.lesson03;

import com.wangchenguang.mockito.common.Account;
import com.wangchenguang.mockito.common.AccountDao;
import org.junit.Rule;
import org.junit.Test;
import org.mockito.Mock;
import org.mockito.junit.MockitoJUnit;
import org.mockito.junit.MockitoRule;

import static org.mockito.Mockito.mock;

/**
 * @author wcg
 * @CreateDate 2020/4/25-20:50
 */
public class MockitoByRuleTest {


    @Rule
    public MockitoRule mockitoRule = MockitoJUnit.rule();

    @Mock
    AccountDao accountDao;

    @Test
    public void testMock(){

//        AccountDao accountDao = mock(AccountDao.class);
        Account account = accountDao.findAccount("x","x");

        System.out.println(account);







    }






}
