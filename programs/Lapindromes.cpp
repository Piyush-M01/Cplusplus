#include <bits/stdc++.h>
#include<string.h>
#include<map>
using namespace std;

int main() {
	// your code goes here
	int n;
	map<char,unsigned int> mp1;
	map<char,unsigned int> mp2;
	scanf("%d",&n);
	int i=0;
	while(i<n)
	{
	    string s,s1,s2;
	    cin>>s;
	    int l=s.length();
	    if(l%2==0)
	    {
	        s1=s.substr(0,l/2);
	        s2=s.substr(l/2,l);
	    }
	    else
	    {
	        int m=l+1;
	        s1=s.substr(0,(m/2)-1);
	        s2=s.substr((m/2),l);
	    }
	    int c=0;
	    while(c<s1.length())
	    {
	        mp1[s1[c]]++;
	        mp2[s2[c]]++;
	        c++;
	    }
	    if(mp1==mp2)
	    printf("YES \n");
	    else
	    printf("NO \n");
	    i++;
	    mp1.clear();
	    mp2.clear();
	}
	return 0;
}
