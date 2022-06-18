#ifndef _STACKS_HPP_
#define _STACKS_HPP_
#include<iostream>
using namespace std;
#define MAX 100

class Stack
{
    public:
    int top;
    int a[MAX];
    Stack()
    {
        top=-1;
    }
    void push(int);
    int pop();
    int peek();
    void display();
    bool isEmpty();
};





#endif