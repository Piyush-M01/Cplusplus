#include<iostream>
#include <algorithm>
#include<vector>
#include<stack>
using namespace std;
void triplets(int arr[],int size)
{
    vector<int> v;
    stack<int> st;
    st.push(0);
    int c=0,sum;
    for(int i=0;i<size;i++)
    {
        while(c<size)
        {
            if(c!=i)
            {int second=arr[c];
            for(int j=0;j<size;j++)
            {
                if(i!=j && j!=c)
                {
                    if(arr[i]+second+arr[j]==0 && st.top()!=abs(arr[i])+abs(arr[c])+abs(arr[j]))
                    {v.push_back(arr[i]);
                    v.push_back(arr[c]);
                    v.push_back(arr[j]);
                    st.push(abs(arr[i])+abs(arr[c])+abs(arr[j]));}
                }
                else
                continue;
            }}
            c++;
        }
        c=0;
    }
    int count=1;
    for(int i=0;i<v.size();i++)
    {
        if(count==3)
        cout<<v[i-2]<<" "<<v[i-1]<<" "<<v[i];
        else if(count>3)
        {
            count=1;
            cout<<"\n";
        }
        count++;
    }
}
int main()
{
    int size;
    cout<<"Enter size"<<"\n";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array"<<"\n";
    for(int i=0;i<size;i++)
    {
        int e;
        cin>>e;
        arr[i]=e;
    }
    sort(arr,arr+size,[](auto & lhs, auto & rhs){return abs(lhs)<abs(rhs);});
    triplets(arr,size);
}