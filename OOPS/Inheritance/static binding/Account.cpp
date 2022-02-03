#include "Account.hpp"
using namespace std;

Account::Account()
:Account(0.0){
}

Account::Account(double balance)
:balance{balance}{}

void Account::deposit(double amount)
{
    balance=balance+amount;
}

void Account::withdraw(double amount)
{
    if(balance>=amount)
    balance=balance-amount;
    else
    cout<<"Insufficent funds"<<endl;
}

std::ostream &operator<<(std::ostream &os, const Account &account)
{
    os<<"Account balance:"<<account.balance;
    return os;
}