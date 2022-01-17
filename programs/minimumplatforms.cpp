#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int platforms(int ar[],int dep[],int size)
{
    vector<int> v;
    int max=0,c=1;
    sort(ar,ar+size);
    sort(dep,dep+size);
    for(int i=1;i<size-1;i++)
    {
        if(dep[i-1]>=ar[i])
        {
            c++;
            v.push_back(dep[i-1]);
        }
        else
        {
            if(max<c)
            max=c;
            if(v.empty()==false)
            {
                v.pop_back();
                c--;
            while(ar[i]>v[v.size()-1])
            {
                v.pop_back();
                c--;
            }
            }
        }
    }
    return max;
}
int main()
{
    int size;
    cout<<"Enter the size"<<"\n";
    cin>>size;
    int ar[size],dep[size];
    cout<<"Enter the arrival timings"<<"\n";
    for(int i=0;i<size;i++)
    {
        int e;
        cin>>e;
        ar[i]=e;
    }
    cout<<"Enter the departure timings"<<"\n";
    for(int i=0;i<size;i++)
    {
        int e;
        cin>>e;
        dep[i]=e;
    }
    cout<<"Minimum platforms required "<<platforms(ar,dep,size)<<"\n";
    return 0;
}