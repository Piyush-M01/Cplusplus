//using hashing
#include<iostream>
#include<unordered_map>
using namespace std;
void Union(int a[],int b[],int size,int size1)
{
    unordered_map<int,int> um;
    for(int i=0;i<size;i++)
    {
        um[a[i]]++;
    }
    for(int i=0;i<size1;i++)
    {
        um[b[i]]++;
    }
    for(auto i:um)
    cout<<i.first<<" ";
}
int main()
{
    int size,size1;
    cout<<"Enter size"<<"\n";
    cin>>size>>size1;
    int arr[size];
    int brr[size1];
    cout<<"Enter elements"<<"\n";
    for(int i=0;i<size;i++)
    {
        int e;
        cin>>e;
        arr[i]=e;
    }
    for(int i=0;i<size1;i++)
    {
        int e;
        cin>>e;
        brr[i]=e;
    }
    Union(arr,brr,size,size1);
    return 0;
}