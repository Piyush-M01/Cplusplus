#include<iostream>
#include<queue>
using namespace std;
void streamEle(int arr[],int size,int k)
{
    priority_queue<int,vector<int>,greater<int>> q;
    for(int i=0;i<size;i++)
    {
        q.push(arr[i]);
        if(i<k-1)
        cout<<-1<<" ";
        else
        {
            cout<<q.top()<<" ";
            q.pop();
        }

    }
}
int main()
{
    cout<<"Enter size"<<endl;
    int size;
    cin>>size;
    cout<<"Enter k"<<endl;
    int k;
    cin>>k;
    cout<<"Enter the elements"<<endl;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        int e;
        cin>>e;
        arr[i]=e;
    }
    streamEle(arr,size,k);
}