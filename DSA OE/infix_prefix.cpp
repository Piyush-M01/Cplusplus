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

int check(char op)
{
    switch(op)
    {
        case '-':
        return 1;
        break;

        case '+':
        return 2;
        break;

        case '/':
        return 3;
        break;

        case '*':
        return 4;
        break;

        case '^':
        return 5;
        break;

        default:
        break;
    }
    return 0;
}

string reverse(string str1)
{
    string s1="";
    for(int i=0;i<str1.length();i++)
    {
        if(str1[i]=='(')
        s1=')'+s1;
        else if(str1[i]==')')
        s1='('+s1;
        else
        s1=str1[i]+s1;
    }
    return s1;
}

void convert(string str)
{
    char operators[5]={'-','+','/','*','^'};
    Stack ob;
    string s1="";
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='^' || str[i]=='*' || str[i]=='/' || str[i]=='*' || str[i]=='+' || str[i]=='-')
        {
            char stprec=ob.peek();
            int prec1=check(stprec);
            int prec2=check(str[i]);
            if(prec1>prec2)
            s1=s1+ob.pop();
            ob.push(str[i]);
        }
        else if(str[i]=='(')
        ob.push(str[i]);

        else if(str[i]==')')
        {
            while(ob.peek()!='(')
            {
                s1=s1+ob.pop();
            }
            ob.pop();
        }

        else
        s1=s1+str[i];
    }

    while(!ob.isEmpty())
    s1=s1+ob.pop();
    cout<<reverse(s1)<<endl;
}



int main()
{
    string str1;
    cout<<"Enter string \n";
    cin>>str1;
    convert(reverse(str1));
    return 0;
}