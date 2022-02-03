#include<iostream>
using namespace std;
int First(int arr[],int size,int key)
{
    int l=0,u=size-1,mid;
    while(l<=u)
    {
        mid=(l+u)/2;
        if(arr[mid]==key && arr[mid-1]<key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            l=mid+1;
        }
        else if(arr[mid]>=key)
        {
            u=mid-1;
        }
    }
    return -1;
}
int Last(int arr[],int size,int key)
{
    int l=0,u=size-1,mid;
    while(l<=u)
    {
        mid=(l+u)/2;
        if(arr[mid]==key && arr[mid+1]>key)
        {
            return mid;
        }
        else if(arr[mid]<=key)
        {
            l=mid+1;
        }
        else if(arr[mid]>=key)
        {
            u=mid-1;
        }
    }
    return -1;
}
int main()
{
    int size;
    cout<<"Enter size"<<"\n";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements"<<"\n";
    for(int i=0;i<size;i++)
    {
        int e;
        cin>>e;
        arr[i]=e;
    }
    int key;
    cout<<"Enter the element to be searched"<<"\n";
    cin>>key;
    cout<<"First "<<First(arr,size,key)<<"\n";
    cout<<"Last "<<Last(arr,size,key)<<"\n";
    return 0;
}