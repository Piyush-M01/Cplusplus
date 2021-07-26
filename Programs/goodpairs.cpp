#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void Good_Pairs(vector<int> v1)
{
    int count=0;
    for(auto i=0;i<v1.size();i++)
    {
        for(auto j=i+1;j<v1.size();j++)
        {
            if((v1[i]==v1[j])&&(i<j))
            count++;
        }
    }
    cout<<count;
}
int main()
{
    int si;
    cout<<"Enter the size"<<endl;
    cin>>si;
    vector<int> v;
    for(int i=1;i<=si;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    Good_Pairs(v);
}