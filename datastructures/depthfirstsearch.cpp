/* BREADTH FIRST SEARCH
    DIRECTED GRAPH - ALL THE EDGES ARE UNIDIRECTIONAL
*/ 

#include<iostream>
#include<vector>
using namespace std;


vector<vector<int>> v;
vector<bool> check;


void addEdge(int a,int b)
{
    v[a].push_back(b);
}


void DFS(int n)
{
    check[n]=true;
    cout<<n<<" ";
    for(auto i:v[n])
    {
        if(!check[i])
        DFS(i);
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
        addEdge(a,b);
    }
    DFS(0);
    return 0;
}