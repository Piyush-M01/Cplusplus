#include<iostream>
#include<vector>
using namespace std;

void display(vector<vector<int>> &v)
{
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v.size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
}

/*
diagonal condition -
1) i+1 and j+1
2)i+1 and j-1

row condition-
i,j+1

column condition-
i+1,j
*/
vector<vector<int>> v={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
int size=4;
void FindPos(int n,int i,int j)
{
    if(n<1)
    {
        display(v);
    }
    else
    {
    if(i==0)
    {
        for(int k=0;k<n;k++)
        {
            v[i][k]=1;
            FindPos(n-1,i+1,0);
            v[i][k]=0;
        }
    }
    else
    {
        if(i<n && j<n)
        {for(int k=0;k<n;k++)
        {
            for(int l=0;l<n;l++)
            {
                if(v[l][j]==1)
                FindPos(n,i,j+1);
                else
                {
                    if(abs(k-l)==abs(i-j) && v[i][l]==1 && j<size-1)
                    FindPos(n,i,j+1);
                    else
                    {
                        v[i][l]=1;
                        FindPos(n-1,i+1,0);
                    }
                }
            }
            v[i][k]=0;
        }
        }
    }
    }
display(v);
}

int main()
{
    cout<<"Enter the number of queens"<<"\n";
    int n;
    cin>>n;
    FindPos(n,0,0);
}