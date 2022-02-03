#include<iostream>
using namespace std;
void CountZero(int arr[],int size)
{
    int l=0,u=size-1,mid;
    while(l<=u)
    {
        mid=(l+u)/2;
        if((arr[mid]==1 && arr[mid+1]==0) || (arr[mid]==0 && arr[0]==0))
        {
            cout<<(u-mid);
            break;
        }
        else if(arr[mid]==1 && arr[mid+1]==1)
        {
            l=mid+1;
        }
        else if(arr[mid]==0 && arr[mid-1]==0)
        {
            u=mid-1;
        }
    }
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
    CountZero(arr,size);
}