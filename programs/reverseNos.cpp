#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,i=0;
	scanf("%d",&n);
	int n1,rev=0;
	while(i<n)
	{
        scanf("%d",&n1);
        i++;
        while(n1>0)
        {
            int d=n1%10;
            rev=rev*10+d;
            n1=n1/10;
        }
        printf("%d \n",rev);
        rev=0;
	}
	return 0;
}
