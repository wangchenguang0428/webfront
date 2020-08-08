package com.wangchenguang.mockito.quickstart;

import com.wangchenguang.mockito.common.Account;
import com.wangchenguang.mockito.common.AccountDao;
import com.wangchenguang.mockito.common.AccountLoginContrller;
import org.junit.Assert;
import org.junit.Before;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.mockito.Mockito;
import org.mockito.runners.MockitoJUnitRunner;

import javax.servlet.http.HttpServletRequest;

import static org.hamcrest.CoreMatchers.equalTo;
import static org.mockito.Matchers.anyString;
import static org.mockito.Mockito.when;

/**
 * @author wcg
 * @CreateDate 2020/4/25-16:05
 */

@RunWith(MockitoJUnitRunner.class)
public class AccountLoginControllerTest {

    private AccountDao accountDao;

    private HttpServletRequest request;

    private AccountLoginContrller accountLoginContrller;




    @Before
    public void setup(){
        this.accountDao = Mockito.mock(AccountDao.class);
        this.request = Mockito.mock(HttpServletRequest.class);
        this.accountLoginContrller = new AccountLoginContrller(accountDao);
    }
    @Test
    public  void  testLoginSuccess(){


            Account account = new Account();
            when(request.getParameter("username")).thenReturn("Alex");
            when(request.getParameter("password")).thenReturn("123456");

            when(accountDao.findAccount(Mockito.anyString(),Mockito.anyString())).thenReturn(account);

            String result = accountLoginContrller.login(request);

        Assert.assertThat(accountLoginContrller.login(request),equalTo("/index.jsp"));
    }


    @Test
    public  void  testLoginFailure(){


        when(request.getParameter("username")).thenReturn("Alex");
        when(request.getParameter("password")).thenReturn("123451");

        when(accountDao.findAccount(Mockito.anyString(),Mockito.anyString())).thenReturn(null);

        String result = accountLoginContrller.login(request);

        Assert.assertThat(accountLoginContrller.login(request),equalTo("/login"));
    }


    @Test
    public void testLogin505() {
        when(request.getParameter("username")).thenReturn("Alex");
        when(request.getParameter("password")).thenReturn("123451");
        when(accountDao.findAccount(anyString(),anyString())).thenThrow(UnsupportedOperationException.class);
        accountLoginContrller.login(request);

        Assert.assertThat(accountLoginContrller.login(request),equalTo("/505"));


//       System.out.println(res);


    }




}
