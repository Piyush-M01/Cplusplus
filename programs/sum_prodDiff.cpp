#include<iostream>
using namespace std;
class Difference
{
    int sum=0,prod=1,diff,n;
    public:
    void setData(int num)
    {
        n=num;
    }
    void calcSum_Prod()
    {
        int n1=n;
        while(n1>0)
        {
            int d=n1%10;
            sum=sum+d;
            prod=prod*d;
            n1=n1/10;
        }
    }
    void calcDifference()
    {
        diff=abs(sum-prod);
    }
    void display()
    {
        cout<<"Difference :"<<diff;
    }
};
int main()
{
    int n;
    cin>>n;
    Difference ob;
    ob.setData(n);
    ob.calcSum_Prod();
    ob.calcDifference();
    ob.display();
}