#include<iostream>
#include <string>
using namespace std;
int main()
{
    string s,t;
    cout<<"Enter s"<<endl;
    cin>>s;
    cout<<"Enter t"<<endl;
    cin>>t;
    int l1=0,l2=0;
    for(int i=0;i<t.length();i++)
    {
        if(i<s.length())
        l1=l1+(int)s[i];
        l2=l2+(int)t[i];
    }
    cout<<(char)(l2-l1);
}