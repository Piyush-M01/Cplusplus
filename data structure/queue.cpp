#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    for(int i=1;i<=5;i++)
    q.push(i*10);

    //displaying queue
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

    cout<<"Swapping two queues"<<endl;
    queue<int> q1,q2;
    for(int i=1;i<=5;i++)
    {
        q1.push(i*10);
        q2.push(i*5);
    }
    q1.swap(q2);
    cout<<"After swapping:"<<endl;
     cout<<"queue1:"<<endl;
     while(!q1.empty())
    {
        cout<<q1.front()<<" ";
        q1.pop();
    }
    cout<<endl;
    cout<<"queue2:"<<endl;
    while(!q2.empty())
    {
        cout<<q2.front()<<" ";
        q2.pop();
    }
    cout<<endl;
}