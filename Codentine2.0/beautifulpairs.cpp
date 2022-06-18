#include <bits/stdc++.h>
#include<map>
#include<queue>
using namespace std;

int main() {
	// your code goes here
    map<int,unsigned int> v;
	int n,k,c=0,m1=0,n1=0,c1=0,c3;
	cin>>n;
    queue<int> q;
    if(n<=10)
    {
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&k);
	    if(k<=200000)
	    {
	    for(int j=0;j<k;j++)
	    {
	        int s;
	        scanf("%d",&s);
	        if(s<=1000000)
	        v[s]++;
	    }
	    for(auto m=v.begin();m!=v.end();++m)
	    {
	        for(auto n=v.begin();n!=v.end();++n)
	        {
	            if(m1!=n1 )
	            {
	                c1++;
	                c=c+(c1*n->second*m->second);
	            }
				c1=0;
				n1++;
	        }
			n1=0;
			m1++;
	    }
		m1=0;
        q.push(c);
        c=0;
        v.clear();
	}
	}
    while(!q.empty())
    {
        printf("%d \n",q.front());
        q.pop();
    }
    }
	return 0;
}