#include<iostream>
using namespace std;
int root(int num)
{
    if(num==0 || num ==1)
    return num;
    else
    {
        int l=1;
        int u=num;
        int ans;
        while(l<=u)
        {
            int mid=(l+u)/2;
            if(mid*mid==num)
            return mid;
            else if(mid*mid<num)
            {
                l=mid+1;
                ans=l-1;
            }
            else if(mid*mid>num)
            {
                u=mid-1;
            }
        }
    return ans;
}
}
int main()
{
    int num;
    cout<<"Enter the number"<<"\n";
    cin>>num;
    cout<<root(num);
}