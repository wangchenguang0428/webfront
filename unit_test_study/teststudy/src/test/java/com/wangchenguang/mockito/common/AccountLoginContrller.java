package com.wangchenguang.mockito.common;

import javax.servlet.http.HttpServletRequest;

/**
 * @author wcg
 * @CreateDate 2020/4/25-15:42
 */
public class AccountLoginContrller {



    private final AccountDao accountDao;


    public AccountLoginContrller(AccountDao accountDao){
        this.accountDao = accountDao;
    }

    public String login(HttpServletRequest request){

        final String username = request.getParameter("username");
        final String password = request.getParameter("password");


        try {
            Account account = accountDao.findAccount(username, password);

            if (account == null) {
                return "/login";
            } else {
                return "/index.jsp";

            }
        }catch (UnsupportedOperationException e){

            return "/505";
        }






    }

}
