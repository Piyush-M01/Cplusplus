#ifndef _SAVINGS_HPP_
#define _SAVINGS_HPP_
#include "Account.hpp"
class Savings: public Account
{
    friend std::ostream &operator<<(std::ostream &os,const Savings &account);
    protected:
    double int_rate;
    public:
    Savings();
    Savings(double balance, double rate);
    void deposit(double amount);

};

#endif


//deposit function needs to increase the balance and amount at a given interest rate
