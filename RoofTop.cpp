#include<iostream>
using namespace std;
int Roof(int arr[],int size)
{
    int l=0,u=size-1,mid,c=0;
    while(l<=u)
    {
        mid=(l+u)/2;
        if (mid!=0 && arr[mid - 1] < arr[mid]) 
        {
            c++;
            l=mid+1;
        }
        else if(arr[mid]<=arr[mid+1])
        {
            l=mid+1;
        }
        else if(arr[mid]>=arr[mid+1])
        {
            u=mid-1;
        }
    }
    return c;
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
    cout<<"RoofTop "<<Roof(arr,size);
    return 0;
}