#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,int> m;
    for(int i=1;i<=5;i++)
    m.insert(pair<int,int>(i,i*10));

    for(auto &i:m)
    cout<<i.first<<":"<<i.second<<" ";
    cout<<endl;

    //assigning elements of map1 to map2 
    map<int,int> map2(m.find(3),m.end());
    cout<<"Map2 elements:"<<endl;
    for(auto &i:map2)
    cout<<i.first<<":"<<i.second<<" ";
    cout<<endl;

    //removing elements
    m.erase(m.begin(),m.find(3));
    cout<<"Map1 elements after erasing:"<<endl;
    for(auto &i:m)
    cout<<i.first<<":"<<i.second<<" ";
    cout<<endl;

    //check whether a particular key is present or not
    if(map2.count(3))
    cout<<"key 3 is present and value is:"<<map2[3]<<endl;
    else
    cout<<"key 3 is not present"<<endl;

    if(map2.count(10))
    cout<<"key 10 is present and "<<"value is:"<<map2[10]<<endl;
    else
    cout<<"key 10 is not present"<<endl;

}