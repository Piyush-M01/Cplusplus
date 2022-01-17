#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string s,s1="";
    cout<<"Enter a string"<<endl;
    cin>>s;
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        if(st.empty())
        st.push(s[i]);
        else if(st.top()==s[i])
        st.pop();
        else
        st.push(s[i]);
    }
    while (!st.empty()) 
    {
        s1=st.top()+s1;
        st.pop();
    }
    cout<<s1;
}