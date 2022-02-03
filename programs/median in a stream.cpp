#include<iostream>
#include<vector>
#include<queue>
using namespace std;
priority_queue<int> q;
void insertHeap(int x)
{
    q.push(x);
}
double getMedian()
{
    int s=q.size();
    int c=0;
    while(c!=s/2)
    {
    if(s%2!=0 && q.size)
    {
        return q.front();
    }
    else if(s%2==0)
    {
        int n=q.front();
        q.pop();
        int n1=q.front();
        return (n1+n)/2;
    }
    q.pop();
}
int main()
{
    cout<<"Enter size"<<endl;
    int size;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<size;i++)
    {
        int e;
        cin>>e;
        arr[i]=e;
    }
    for(int i=0;i<size;i++)
    {
        insertHeap(arr[i]);
        cout<<getMedian()<<" ";
    }
}