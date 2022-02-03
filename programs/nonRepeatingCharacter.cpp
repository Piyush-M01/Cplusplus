#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string"<<"\n";
    getline(cin,s);

    unordered_map<char,int> mp;
    for(int i=0;i<s.length();i++)
    {
        mp[s[i]]++;
    }
    char f;
    for(auto i=mp.begin();i!=mp.end();i++)
    {
       if(i->second==1)
       f=i->first;
    }
    cout<<f;
    return 0;
}