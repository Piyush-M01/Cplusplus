#include "saving.hpp"
using namespace std;

Savings::Savings(double balance,double rate)
:Account(balance),int_rate{rate}{}

Savings::Savings()
:Savings{0.0,0.0}{}

void Savings::deposit(double amount)
{
    amount=amount+(amount*int_rate/100);
    Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os,const Savings &account)
{
    os<<"Savings account balance:"<<account.balance<<"interest rate:"<<account.int_rate<<endl;
    return os;
}