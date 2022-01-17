#include <bits/stdc++.h>
#include<sstream>  
using namespace std;

void fastscan(int &x)
    {
        bool neg=false;
        register int c;
        x =0;
        c=getchar();
        if(c=='-')
        {
            neg = true;
            c=getchar();
        }
        for(;(c>47 && c<58);c=getchar())
            x = (x<<1) + (x<<3) +c -48;
        if(neg)
            x *=-1;
    }
int fact(int n)
{
    int c=0;
    long long int p=1;
    while(n>1)
    {
        p=p*n;
        p=p%10000000000;
        if(p%10==0)
        {    
        c++;
        p=p/10;
        string s=to_string(p);
        s="0"+s;
        p=stoi(s);
        }
        n--;
    }
    return c;
}

int main() {
	// your code goes here
	int t;
	fastscan(t);
	while(t>0)
	{
	    int n;
	    fastscan(n);
        if(n<5)
        printf("0 \n");
        else if(n>=5 && n<=9)
        printf("1 \n");
        else if(n>=10 && n<=14)
        printf("2 \n");
        else 
	    printf("%d \n",fact(n));
	    t--;
	}
	return 0;
}