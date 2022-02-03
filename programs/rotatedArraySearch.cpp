#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int start,int end,int key)
{
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==key)
        {
            return mid;
        }  
        else if(arr[mid]<key)
        start=mid+1;
        else if(arr[mid]>key)
        end=mid-1;
    }
    return -1;
}
int pivot(int arr[],int key,int size)
{
    int l=0,u=size-1,mid;
    while(l<=u)
    {
        mid=(l+u)/2;
        if((mid!=0 && arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])||(mid!=0 && arr[mid]<arr[mid+1] && arr[mid]<arr[mid-1]))
        {
            //return mid;
            if(key>=arr[0])
            return search(arr,0,mid,key);
            else
            return search(arr,mid,size-1,key);
        }
        else if(arr[mid]<arr[mid+1] && (mid!=0 && (arr[mid-1]<arr[mid])))
        l=mid+1;
        else
        u=mid-1;
    }
    return -1;
}
int main()
{
    cout<<"Enter number of elements"<<"\n";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements"<<"\n";
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter key \n");
    int key;
    scanf("%d",&key);
    cout<<"Index is: "<<pivot(arr,key,n);
    return 0;
}