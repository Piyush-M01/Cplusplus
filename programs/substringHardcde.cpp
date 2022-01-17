#include<iostream>
using namespace std;

void removE(string s)
{
    int index,len;
    cout<<"Enter the index and length"<<endl;
    cin>>index>>len;
    string s1="";

    for(int i=0;i<s.length();i++)
    {
        if(i!=index-1 &&  (i<index-1 || i>=(index+len-1)))
        s1=s1+s[i];
    }
    cout<<s1;

}

void setString(string s)
{
    string s1="",s2;
    int index;
    cout<<"Enter the string"<<endl;
    cin>>s1;
    cout<<"Enter the index"<<endl;
    cin>>index;

    for(int i=0;i<s.length();i++)
    {
        if(i!=index-1)
        s2=s2+s[i];
        else
        s2=s2+s1+s[i];
    }
    cout<<s2;
}


int main()
{
    cout<<"Enter the string"<<"\n";
    string s;
    cin>>s;

    int ch;
    cout<<"Enter 1 for concatenation \n Enter 2 for deletion"<<"\n";
    cin>>ch;

    switch (ch)
    {
    case 1:
        setString(s);
        break;
    
    case 2:
        removE(s);
        break;

    default:
        break;
    }
    return 0;
}