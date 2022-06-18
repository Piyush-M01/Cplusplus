#include<iostream>
using namespace std;
int main()
{
    int x= 5,c=5;
    int size = sizeof(int) * 8;
    while(c!=0)
    {
        cout<<((x >> 1) & ~(((0x1 << size) >> 1) << 1));
    }
    return 0;
}