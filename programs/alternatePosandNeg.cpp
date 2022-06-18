#include<iostream>
using namespace std;
#include<vector>

void positive(vector<int> &v)
{
    int p1=0,p2=1;
    while(p2<v.size())
    {
        if(v[p2]<0)
        {
            int temp=v[p2];
            v.erase(v.begin()+p2);
            v.insert(v.begin()+p1,temp);
            p1=p1+2;
            p2++;
        }
        else
        {
            p2++;
        }
    }
    for(auto i:v)
    cout<<i;
}

void negative(vector<int> &v)
{
    int p1=0,p2=1;
    while(p2<v.size())
    {
        if(v[p2]>0)
        {
            int temp=v[p2];
            v.erase(v.begin()+p2);
            v.insert(v.begin()+p1,temp);
            p1=p1+2;
            p2++;
        }
        else
        {
            p2++;
        }
    }
    for(auto i:v)
    cout<<i;
}

int main()
{
    vector<int> v;
    int size;
    cout<<"Enter the number of elements"<<endl;
    cin>>size;

    for(int i=0;i<size;i++)
    {
        int n;
        cin>>n;
        v.push_back(n);
    }

    if(v[0]<0)
    negative(v);
    else
    positive(v);

    return 0;
}