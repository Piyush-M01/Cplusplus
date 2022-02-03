#include"Savings.cpp"
#include "Account.cpp"
using namespace std;

int main()
{
    cout<<"Account class"<<endl;

    Account a1{1000.0};
    cout<<a1<<endl;

    a1.deposit(500.0);
    cout<<a1<<endl;

    a1.withdraw(1000);
    cout<<a1<<endl;

    a1.withdraw(5000.0);
    cout<<a1<<endl;

    cout<<"Savings Account class"<<endl;
    Savings s1{1000,5.0};
    cout<<s1<<endl;

    s1.deposit(1000);
    cout<<s1<<endl;

    s1.withdraw(2000);
    cout<<s1<<endl;

    s1.withdraw(1000);
    cout<<s1<<endl;

    return 0;

}