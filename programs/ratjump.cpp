//backtracking
#include<iostream>
#include<vector>
using namespace std;
bool presence=false;
void display(vector<vector<int>> &v)
{
    if(presence==false)
    cout<<-1;
    else
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v.size();j++)
        {
            cout<<v[i][j];
        }
        cout<<endl;
    }
}
void path(vector<vector<int>> &v,vector<vector<int>> &route,int i,int j)
{
    int size=v.size()-1;
    if(i==size && j==size)
    {
        route[i][j]=1;
        presence=true;
        display(route);
    }
    if(i<=size &&j<=size)
    {
        if(v[i][j]!=0)
        {
            route[i][j]=1;
            for(int k=1;k<=v[i][j];k++)
            {
                if(j<size)
                path(v,route,i,j+k);
                if(i<size)
                path(v,route,i+k,j);
            }
            v[i][j]=0;
            if(v[i][j]==0)
            route[i][j]=0;
        }
    } 
}
void initializer(vector<vector<int>> v)
{
    vector<vector<int>> route={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    path(v,route,0,0);
}
int main()
{
    vector<vector<int>>v={{2,1,0,0},{2,0,0,1},{0,1,0,1},{0,0,0,1}};
    initializer(v);
    if(presence==false)
    display(v);
    return 0;
}