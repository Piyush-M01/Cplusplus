#include<iostream>
#include "savingsAcct.hpp"
using namespace std;

Savings_Account::Savings_Account()
{

}

Savings_Account::~Savings_Account()
{

}

void Savings_Account::deposit(double amount)
{
    cout<<"Deposited in savings acct "<<amount<<endl;
}

void Savings_Account::withdraw(double amount)
{
    cout<<"Withdrawn amount from savings account "<<amount<<endl;
}
