#include<set>
#include<iostream>
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(6);
    auto it=s.end();
    it--;
    cout<<*it;
}