#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void MaxActivity(int start[],int end[],int n,int weight)
{
    vector<vector<int>> v;
    for(int i=0;i<n;i++)
    v.push_back({start[i]/end[i],end[i]});
    sort(v.begin(),v.end());
    int s=0;
    for(int i=v.size()-1;i>=0;i--)
    {
        if (weight<=0)
        break;
        if(weight>0 && weight<v[i][1])
        s=s+((weight)*v[i][0]);
        else
        {
            weight=weight-v[i][1];
            s=s+(v[i][0]*v[i][1]);
        }
    }
    cout<<s;
}
int main()
{
    int N;
    cout<<"Enter N"<<"\n";
    cin>>N;
    cout<<"Enter max weight"<<endl;
    int weight;
    cin>>weight;
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
    MaxActivity(start,end,N,weight);
}