//breadth first search
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<vector<int>> v;
vector<bool> check;
void edge(int a,int b)
{
    v[a].push_back(b);
}
void bfs(int n)
{
    queue<int> q;
    q.push(n);
    check[n]=true;

    while(!q.empty())
    {
        int a=q.front();
        q.pop();
        for(auto i:v[a])
        {
            if(check[i]!=true)
            {
                q.push(i);
                check[i]=true;
            }
        }
        cout<<a<<" ";
    }
}
int main()
{
    int n, e;
    cout << "Enter the number of vertices: ";
    cin >> n;
    cout << "\n\nEnter the number of edges: ";
    cin >> e;
    check.assign(n,false);
    v.assign(n,vector<int>());
    int a,b;
    for(int i=0;i<e;i++)
    {
        cout<<"Enter source and connected node: \n";
        cin>>a>>b;
        edge(a,b);
    }
    for(int i = 0; i < n; i++)
    {
        //if the node i is unvisited
        if (!check[i])
        {
            bfs(i);
        }
    }
    cout << "\n\n\n";
    return 0;
}