#include<iostream>
#include<queue>
using namespace std;

void Klargest(string arr[],int k,int size)
{
    priority_queue<long> q;
    for(int i=0;i<size;i++)
    q.push(stol(arr[i]));
    while(k>0)
    {
        cout<<to_string(q.top())<<" ";
        q.pop();
        k--;
    }
}
int main()
{
    int size;
    int k;
    cout<<"Enter size"<<"\n";
    cin>>size;
    cout<<"Enter K"<<"\n";
    cin>>k;
    string arr[size];
    cout<<"Enter the elements of array"<<"\n";
    for(int i=0;i<size;i++)
    {
        string e;
        cin>>e;
        arr[i]=e;
    }
    Klargest(arr,k,size);
}