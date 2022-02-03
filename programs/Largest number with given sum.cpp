#include<iostream>
#include<vector>
using namespace std;
int c=0;
vector<int> v;
void Number(int n , int sum)
{
    c++;
    if(c<=n && sum>0)
    {
        if(sum>=10 && c<n)
        {
            sum=sum-9;
            v.push_back(9);
            Number(n,sum);
        }
        else if(c==n && sum>=10)
        {
            c++;
            Number(n,sum);
        }
        else
        {
            v.push_back(sum);
            Number(n,0);
        }
    }
    else
    {
        if(sum!=0)
        c=-1;
    }
}
int main()
{
    cout<<"Enter number and total sum"<<endl;
    int n,sum;
    cin>>n>>sum;
    Number(n,sum);
    if(c!=-1)
    {
    for(auto i:v)
    cout<<i;
    for(int i=0;i<(n-v.size());i++)
    cout<<0;
    }
    else
    cout<<-1;
    return 0;
}