#include<iostream>
using namespace std;

class Employee
{
    private:
    int a,b,c;
    public:
    int d,e;
    void setData(int a,int b,int c);
    void getData();
};
void Employee:: setData(int a1,int a2,int a3)
{
    a=a1;
    b=a2;
    c=a3;
}
void Employee::getData()
{
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
}
int main()
{
    Employee harry;
    harry.d=10;
    harry.e=25;
    cout<<"Enter a,b,c"<<endl;
    int a,b,c;
    cin>>a>>b>>c;
    harry.setData(a,b,c);
    harry.getData();
}