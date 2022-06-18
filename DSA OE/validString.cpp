#include<iostream>
#include<math.h>
using namespace std;

class Stack
{
    public:
    int top;
    char s[100];
    Stack()
    {
        top=-1;
    }
    void push(int);
    char pop();
    char peek();
    void display();
    bool isEmpty();
};


void Stack::push(int ele)
{
    if(top==99)
    cout<<"Stack overflow \n";
    else
    {
        s[++top]=ele;
        cout<<"Pushed element "<<ele<<" into the stack \n";
    }
}

char Stack::pop()
{
    if(top==-1)
    {
        cout<<"Stack underflow \n";
        return 0;
    }
    else
    {
        int ele=s[top--];
        return ele;
    }
}

char Stack::peek()
{
    if(top<0)
    {
        cout<<"Stack is empty \n";
        return 0;
    }
    else
    {
        int ele=s[top];
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
            cout<<s[top]<<"\n";
            top--;
        }
    }
    else
    cout<<"Stack is empty"<<"\n";
}

void validStr(string str)
{
    int f=0;
    Stack ob;
    string s1="";
    for(int i=0;i<str.length();i++)
    {
        s1=s1+str[i];
        if(str[i]=='(' || str[i]=='{' || str[i]=='[')
        {
            ob.push(str[i]);
        }
        else if((str[i]==')' && ob.peek()=='(') || (str[i]==']' && ob.peek()=='[') || (str[i]==']' && ob.peek()=='{'))
        {
            ob.pop();
        }
        else if((str[i]==')' && ob.peek()!='(') || (str[i]=='}' && ob.peek()!='{') || (str[i]==']' && ob.peek()!='['))
        {    
            cout<<"Invalid string";
            f=1;
            break;
        }
    }
    if(ob.isEmpty() && f==0)
    cout<<"Valid string \n";
    else
    cout<<"Invalid string \n";
}

int main()
{
    cout<<"Enter string\n";
    string s1;
    cin>>s1;
    validStr(s1);
    return 0;
}

