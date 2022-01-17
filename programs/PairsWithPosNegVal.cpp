//target complexity O(nlog(n))
#include<iostream>
#include<algorithm>
using namespace std;
void pairs(int arr[],int size)
{
    sort(arr,arr+size,[](int i, int j) { return abs(i) < abs(j);});
    for(int i=0;i<size;i++)
    {
        if(arr[i]==-arr[i+1] && i+1!=size)
        cout<<-abs(arr[i])<<abs(arr[i+1]);
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
    pairs(arr,size);
    return 0;
}