#include<iostream>
#include "Account.hpp"
using namespace std;

void Account::deposit(double amount)
{
    cout<<"Account deposited "<<amount<<endl;
}
void Account::withdraw(double amount)
{
    cout<<"Amount withdrawn "<<amount<<endl;
}

Account::Account(){

}

Account::~Account()
{

}