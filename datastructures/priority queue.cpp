#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> pq;
    pq.push(50);
    pq.push(1);
    pq.push(100);
    pq.push(5);

    while(!pq.empty())
    {
        cout<<pq.top()<<endl;
        pq.pop();
    }
}