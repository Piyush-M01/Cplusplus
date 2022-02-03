#include<iostream>
#include<string>
#include<bitset>
using namespace std;
string binary(int n)
{
    /*string s1="";
    while(n>0)
    {
        int d=n%2;
        s1=to_string(d)+s1;
        n=n/2;
    }*/
    string s1 = bitset<64> (n).to_string();
    return s1;
}
int maxConsecutiveOnes(int x)
{
    //complexity O(logn)
    // Initialize result
    int count = 0;
 
    // Count the number of iterations to
    // reach x = 0.
    while (x!=0)
    {
        // This operation reduces length
        // of every sequence of 1s by one.
        x = (x & (x << 1));
 
        count++;
    }
 
    return count;
}
int count(string s)
{
    int c=0,f=0;
    for (int i=0;i<s.length();i++)
    {
        if(s[i]=='1' && s[i+1]=='1')
        {
            c++;
        }
        else if(s[i]=='1' && s[i+1]=='0')
        {
            c++;
            if(f<c)
                f=c;
            c=0;
        }
    }
    return f;
}
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    string s=binary(n);
    cout<<"Longest consecutive 1s are: "<<count(s)<<endl;
    cout<<"Longest consecutive 1: "<<maxConsecutiveOnes(n);
}