#include<iostream>
//#include<stacks.hpp>
#include<math.h>
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


void Stack::push(int ele)
{
    if(top==MAX-1)
    cout<<"Stack overflow \n";
    else
    {
        a[++top]=ele;
        cout<<"Pushed element "<<ele<<" into the stack \n";
    }
}

int Stack::pop()
{
    if(top==-1)
    {
        cout<<"Stack underflow \n";
        return 0;
    }
    else
    {
        int ele=a[top--];
        return ele;
    }
}

int Stack::peek()
{
    if(top<0)
    {
        cout<<"Stack is empty \n";
        return 0;
    }
    else
    {
        int ele=a[top];
        return ele;
    }
}

bool Stack::isEmpty()
{
    if(top==-1)
    return true;

    return false;
}

void Stack::display()
{
    if(top>=0)
    {
        cout<<"Stack elements are : \n";
        while(top!=-1)
        {
            cout<<a[top]<<"\n";
            top--;
        }
    }
    else
    cout<<"Stack is empty"<<"\n";
}

void palindrome(int num)
{
    Stack ob;
    int copyNum=num;
    int count=0;
    while(num>0)
    {
        ob.push(num%10);
        num=num/10;
    }

    int rev=0,mul=1;
    while(!ob.isEmpty())
    {
        int p=ob.pop();
        rev=rev+mul*p;
        mul=mul*10;
    }
    cout<<rev<<endl;

    if(rev==copyNum)
        cout<<"Palindrome Number "<<endl;
    else
        cout<<"Not a palindrome number"<<endl;
}

int main()
{
    cout<<"Enter the number"<<endl;
    int num;
    cin>>num;
    palindrome(num);
    return 0;
}