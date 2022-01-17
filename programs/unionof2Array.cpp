#include<iostream>
#include<set>
using namespace std;
int main()
{
    cout<<"Enter the size of array 1 and array 2"<<"\n";
    int s1,s2;
    cin>>s1>>s2;
    int a1[s1],a2[s2];
    cout<<"Enter the elements of array 1"<<"\n";
    for(int i =0;i<s1;i++)
    {
        int e;
        cin>>e;
        a1[i]=e;
    }
    cout<<"Enter the elements of array 2"<<"\n";
        for(int i =0;i<s2;i++)
    {
        int e;
        cin>>e;
        a2[i]=e;
    }
    set<int> s;
    for(auto i:a1)
    s.insert(i);
    for(auto i:a2)
    s.insert(i);
    cout<<"Union array"<<"\n";
    for(auto i:s)
    cout<<i<<" ";
    return 0;
}