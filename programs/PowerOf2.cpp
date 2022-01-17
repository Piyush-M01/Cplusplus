#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter N"<<"\n";
    cin>>n;
    int x=2;
    while(x<n)
    {
        x=x<<1;
    }
    if(x==n || n==1)
    cout<<"true";
    else
    cout<<"False";
}