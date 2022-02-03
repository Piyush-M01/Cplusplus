#ifndef _SAVINGS_HPP_
#define _SAVINGS_HPP_
#include "Account.hpp"

class Savings_Account: public Account
{
    public:
        Savings_Account();
        ~Savings_Account();
        void deposit(double amount);
        void withdraw(double amount);
};

#endif
