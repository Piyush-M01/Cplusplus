#include <iostream>
#include<queue>
using namespace std;

long factorial(int nm)
{
    long p=1;
    if(nm==0)
    return 1;
    else
    {
    for(int i=2;i<=nm;i++)
    {
        p=p*i;
    }
    return p;
    }
}

long combinations(long s)
{
    long c=0;
    const unsigned long M = 1000000007;
    for(int i=1;i<=s;i++)
    {
        c=c+(factorial(s)/(factorial(s-i)*factorial(i)));
    }
    return c%M;
}
int main() {
	// your code goes here
	queue<long> st;
	long n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    int e;
	    cin>>e;
	    st.push(e);
	}
	while(!st.empty())
	{
	    cout<<combinations(st.front())<<endl;
	    st.pop();
	}
	return 0;
}
