#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int s;
    cout<<"Enter size"<<"\n";
    cin>>s;
    int arr[s];
    cout<<"Enter the elements"<<"\n";
    for(int i=0;i<s;i++)
    {
        int e;
        cin>>e;
        arr[i]=e;
    }

    unordered_map<int,int> mp;
    for(int i=0;i<s;i++)
    {
        mp[arr[i]]++;
    }
    int f=0;
    for(auto i=mp.begin();i!=mp.end();i++)
    {
       if(i->second==1)
       f=i->first;
    }
    cout<<f;
    return 0;
}