#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    int c=s.length()/2;
    int c1=c-1,count=0;
    for(int i=c;i<s.length();i++)
    {
        if((s[i]==')' && s[c1]=='(') || (s[i]==']' && s[c1]=='[') ||(s[i]=='}' && s[c1]=='{'))
        {
            count++;
            c1--;
        }
        else
        {
            count=0;
            break;
        }
    }
    if(count==0)
    {
        for(int i=0;i<s.length();i++)
        {
            if((s[i]=='(' && s[i+1]==')') || (s[i]=='{' && s[i+1]=='}') || (s[i]=='[' && s[i+1]==']'))
            {
                i=i+1;
                count++;
            }
            else
            {
                count=0;
                break;
            }
        }
        if(count==0)
            cout<<"False";
        else
            cout<<"True";
    }
    else
        cout<<"True";
    return 0;
}