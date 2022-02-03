#include<iostream>
using namespace std;
int count(int arr[],int size)
{
    int rear=0,front=0;
    
}
int main()
{
    int size;
    cout<<"Enter size"<<endl;
    cin>>size;
    cout<<"Enter the elements"<<endl;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        int e;
        cin>>e;
        arr[i]=e;
    }
    cout<<count(arr,size);
    return 0;
}