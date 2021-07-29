#include<iostream>
#include<stack>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
};
bool palindrome(Node **head)
{
    stack<int> st;
    int c=0,c1=0;
    Node *last=*head;
    Node *last1=*head;
    while(last->next!=NULL)
    {
        c++;
        last=last->next;
    }
    c++;
    while(last1->next!=NULL)
    {
        if(c1<(int)(c/2))
        st.push(last1->data);
        else
        {
            if(st.top()==last1->data)
            st.pop();
        }
        last1=last1->next;
        c1++;
    }
    if(st.top()==last1->data)
            st.pop();
    return st.empty();
}
int main()
{
    Node *head;
    Node *one=new Node();
    Node *two=new Node();
    Node *three=new Node();
    Node *four=new Node();
    Node *five=new Node();

    one->data=1;
    two->data=2;
    three->data=3;
    four->data=2;
    five->data=1;

    head=one;
    one->next=two;
    two->next=three;
    three->next=four;
    four->next=five;
    five->next=NULL;

    cout<<palindrome(&head);
}