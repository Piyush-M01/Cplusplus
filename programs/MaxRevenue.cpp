#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	vector<int> v;
	int n,i=0;
	cin>>n;
	while(i<n)
	{
	    int e;
	    cin>>e;
	    v.push_back(e);
	    i++;
	}
	sort(v.begin(), v.end());
	i=0;
	int max=0;
	while(i<n)
	{
	    int calc=v[i]*(n-i);
	    if(calc>max)
	    max=calc;
		i++;
	}
	printf("%d",max);
	return 0;
}
