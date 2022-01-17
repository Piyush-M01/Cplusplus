#include<map>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    scanf("%d",&a);
    map<int,unsigned int> mp;
    for(int i=0;i<a;i++)
    {
        int k;
        cin>>k;
        mp[k]++;
    }
    for(auto i=mp.begin();i!=mp.end();++i)
    cout<<i->first<<i->second<<"\n";
    return 0;
}