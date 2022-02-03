#include<iostream>
#include "Account.cpp"
#include "SavingsAcct.cpp"
using namespace std;
int main()
{
    cout<<"Account"<<endl;
    Account acc{};
    acc.deposit(2000.0);
    acc.withdraw(500.0);
    cout<<endl;

    Savings_Account *sav_acc{nullptr};
    sav_acc=new Savings_Account();
    sav_acc->deposit(2000.0);
    sav_acc->withdraw(500.0);
    delete sav_acc;
    return 0;
}