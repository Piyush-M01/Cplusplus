#include<bits/stdc++.h>
#include<queue>
using namespace std;

long long MaxPairwise(priority_queue<int> &v)
{
    long long p=1;
    p=p*v.top();
    v.pop();
    p=p*v.top();
    return p;
}

int main()
{
    priority_queue<int> v;
    int size;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        int n;
        cin>>n;
        v.push(n);
    }
    cout<<MaxPairwise(v);
    return 0;
}