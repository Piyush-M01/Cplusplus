#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number"<<"\n";
    cin>>n;
    int c=1;
    while(n>0)
    {
        if(n&1==1)
        {
            break;
        }
        n=n>>1;
        c++;
    }
    cout<<c;
}