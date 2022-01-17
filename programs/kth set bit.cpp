//check if kth bit is set or not
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter N"<<"\n";
    cin>>n;
    int k;
    cout<<"Enter K"<<"\n";
    cin>>k;
    int c=1;
    while(k>0)
    {
        n=n>>1;
        k--;
    }
    if(n&1==1)
    cout<<"Yes";
    else
    cout<<"No";
}