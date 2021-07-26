#include<iostream>
#include<vector>
#include<map>
using namespace std;
void CurrentNO(vector<int> v)
{
    int count=0;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v.size();j++)
        {
            if(v[j]<v[i])
            count++;
        }
        cout<<count<<" ";
        count=0;
    }

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
    CurrentNO(v);
}