#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter N"<<"\n";
    cin>>n;
    int n1;
    cout<<"Enter N1"<<"\n";
    cin>>n1;
    int c=1;
    while(1)
    {
        if((n&1)^(n1&1)==1)
        break;
        else
        {
            n=n>>1;
            n1=n1>>1;
        }
        c++;
    }
    cout<<c;
}