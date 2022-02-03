#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string"<<endl;
    cin>>s;
    int c=s.length()-1;
    char c1;
    for(int i=0;i<c;i++)
    {
        if (isalpha(s[i]))
        {
            if(isalpha(s[c]))
            {
                c1=s[i];
                s[i]=s[c];
                s[c]=c1;
                c--;
            }
            else if(!isalpha(s[c]))
            {
            c--;
            i--;
            }
        }
    }
    cout<<s;
}