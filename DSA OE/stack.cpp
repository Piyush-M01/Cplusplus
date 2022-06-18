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

int main()
{
    cout<<"Enter 1: push \n 2:pop \n 3:peek \n 4:Empty \n 5:Display \n 0:exit \n";
    int choice;
    cin>>choice;
    Stack ob;
    while(choice!=0)
    {
    switch(choice)
    {
        case 1:
        cout<<"Enter the element you want to enter \n";
        int ele;
        cin>>ele;
        ob.push(ele);
        break;

        case 2:
        cout<<ob.pop()<<"\n";
        break;

        case 3:
        cout<<ob.peek()<<"\n";
        break;

        case 4:
        cout<<ob.isEmpty()<<"\n";
        break;

        case 5:
        ob.display();
        break;

        default:
        break;
    }
    cout<<"Enter next choice \n";
    cin>>choice;
    }
}
