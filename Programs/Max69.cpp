#include<iostream>
#include<vector>
#include<string>
using namespace std;
string change(string n,int a)
{
    string n1="";
    for(int i=0;i<n.length();i++)
    {
        if(i==a)
        {
            n1=n1+'9';
        }
        else
        {
            n1=n1+n[i];
        }
    }
    return n1;
}
int main()
{
    string n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    vector<string> v;
    int ind;
    for(int i=0;i<n.length();i++)
    {
        if(n[i]=='6')
        {
            ind=i;
            v.push_back(change(n,ind));
        }
    }
    int max=100;
    for(int i=0;i<v.size();i++)
    {
        if(max<stoi(v[i]))
        max=stoi(v[i]);
    }
    cout<<max;

}