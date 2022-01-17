#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter N"<<"\n";
    cin>>n;
    int max=0,c=0;
    while(n>0)
    {
        if(n&1==1)
        c++;
        else
        {
            c=0;
        }
        if(max<c)
        max=c;
        n=n>>1;
    }
    cout<<max;
}