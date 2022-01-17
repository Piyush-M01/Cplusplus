#include<iostream>
using namespace std;
int main()
{
    int n,x=2;
    cin>>n;
    if(n==1)
    cout<<"true";
    while(x<=n)
    {
        if(x==n)
        cout<<"true";
        x=x<<1;
    }
}