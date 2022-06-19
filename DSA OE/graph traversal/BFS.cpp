#include<iostream>
using namespace std;

void bfs(int arr[4][4])
{
    int q[4];
    int n=4;
    int front=0,rear=0;
    int source = 0;
    int visited[4]={0,0,0,0};
    q[rear]=source;
    visited[0]=1;
    cout<<source<<" ";
    while(front<=rear)
    {
        source=q[front];
        visited[source]=1;
        for(int i=0;i<4;i++)
        {
            if(arr[source][i]==1 && visited[i]==0)
            {
                q[++rear]=i;
                cout<<i<<" ";
            }
        }
        front++;
    }
}

int main()
{
    int arr[4][4] = {{0, 1, 1, 0}, {1, 0, 0, 1}, {1, 0, 0, 0}, {0, 1, 0, 0}};
    bfs(arr);
    return 0;
}