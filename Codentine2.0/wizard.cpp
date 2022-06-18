#include <iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
	int n;
	long max=0,n1=-1;
	cin>>n;
	int ar[n];
	int v=n/2;
	for(int i=0;i<n;i++)
	{
	    int a;
	    cin>>a;
	    ar[i]=a;
	}
    for(int i=0;i<n;i++)
    {
        long n2 = sizeof(ar) / sizeof(ar[i]);
        long x=count(ar, ar+n2, ar[i]);
        if(x>max && x>v)
        {
            max=x;
            n1=ar[i];
        }
    }
    cout<<n1;
	return 0;
}
