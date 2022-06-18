#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	long a;
	cin>>a;
	if(a<300000 && a>0)
	{
	vector<int> arr1,arr2;
	for(int i=0;i<a;i++)
	{
	    int e;
	    cin>>e;
	    if (e<1000000000000000000)
	    arr1.push_back(e);
	}
	for(int i=0;i<a;i++)
	{
	    int e;
	    cin>>e;
	    if (e<1000000000000000000)
	    arr2.push_back(e);
	}
    int count=0;
	for(int i=0;i<arr1.size();i++)
	{
	    for(int j=0;j<arr2.size();j++)
	    {
	        if(arr1[i]==arr2[j])
	        {
	            arr2.erase(arr2.begin()+j);
	            count++;
	        }
	    }
	}
	if(count==a)
	cout<<"1";
	else if(count!=a)
	cout<<"0";
}
else
return 0;
}
