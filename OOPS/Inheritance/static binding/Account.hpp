#ifndef _ACCOUNT_HPP_
#define _ACCOUNT_HPP_

#include<iostream>

class Account
{
    friend std::ostream &operator<<(std::ostream &os,const Account &account);
    protected:
    double balance;
    public:
    Account();
    Account(double amount);
    void deposit(double amount);
    void withdraw(double amount);
};
#endif
