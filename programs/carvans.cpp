#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int n;
	scanf("%d",&n);
	int i=0;
	vector<long long int> v;
	while(i<n)
	{
	    int a,j=0;
	    scanf("%d",&a);
	    while(j<a)
	        {
	            long long int s;
	            scanf("%lld",&s);
	            v.push_back(s);
	            j++;
	        }
	        j=1;
	   int c=1;
	   long long int slow=100;
	    while(j<a)
	    {
            if(slow>v[j-1])
            {
                slow=v[j-1];
            }
	        if(v[j]<slow)
	            c++;
            j++;
	    }
	    v.clear();
	    i++;
	    printf("%d \n",c);
	}
	return 0;
}
