//target complexity O(n)
//using hashing
#include<iostream>
#include<unordered_map>
using namespace std;
void Equality(int a[],int b[],int size,int size1)
{
    if(size==size1)
    {
    int c=0;
    unordered_map<int,int> um;
    for(int i=0;i<size;i++)
    {
        um[a[i]]++;
    }
    for(int i=0;i<size1;i++)
    {
        if(um.find(b[i])!=um.end() && um[b[i]]>0)
        {
            um[b[i]]--;
            c++;
        }
        else
        {
            c=-1;
            break;
        }
    }
    if(c!=-1)
    cout<<"Equal";
    else
    cout<<"Unequal";
    }
    else
    cout<<"Unequal";
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
    Equality(arr,brr,size,size1);
    return 0;
}