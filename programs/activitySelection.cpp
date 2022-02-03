#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void MaxActivity(int start[],int end[],int n)
{
    vector<vector<int>> v;
    for(int i=0;i<n;i++)
    v.push_back({end[i],start[i]});
    sort(v.begin(),v.end());
    int c=0,e=0;
    for(int i=0;i<v.size();i++)
    {
        if(e<v[i][1])
        {
            c++;
            e=v[i][0];
        }
    }
    cout<<c;
}
int main()
{
    int N;
    cout<<"Enter N"<<"\n";
    cin>>N;
    int start[N],end[N];
    for(int i=0;i<N;i++)
    {
        cout<<"Enter start and end"<<endl;
        int e;
        cin>>e;
        int f;
        cin>>f;
        start[i]=e;
        end[i]=f;
    }
    MaxActivity(start,end,N);
}