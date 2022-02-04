#include<iostream>
#include "MyStr.cpp"
using namespace std;

int main()
{
    Mystr empty;
    Mystr Who("WHO");
    Mystr You{"YOU"};

    empty.display();
    Who.display();
    You.display();

    return 0;
}