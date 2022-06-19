#include<iostream>
using namespace std;

void dfs(int a[5][5])
{
    int visited[10],u,i;
    int n=5,source=0;
    for(i=1;i<=n;i++) 
        visited[i]=0;
    int S[20],top=-1;
    S[++top]=source;
    visited[source]=1;
    while(top>=0)
    {
        //cout<<"top= "<<top<<" "; 
        u=S[top--];
        for(int v=0;v<n;v++)
        { 
            if(a[u][v]==1 && visited[v]==0) {
                visited[v]=1; S[++top]=v;
            }
        }
        cout<<u<<" ";
    }
}

int main()
{
    int arr[5][5]={{0 ,1 ,1 ,1 ,1},{1 ,0 ,0 ,0 ,0},{1,0,0,0,0},{1,0,0,0,0},{1,0,0,0,0}};
    dfs(arr);
    return 0;
}