#include<iostream>
#include<vector>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
};
void print(Node *n)
{
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
    cout<<endl;
}
void reverse(Node **head)
{
    vector<int> v;
    Node* last1=*head;
    Node *last=*head;
    while(last->next!=NULL)
    {
        v.push_back(last->data);
        last=last->next;
    }
    v.push_back(last->data);
    int s=v.size()-1;
    while(last1->next!=NULL)
    {
        last1->data=v[s];
        s--;
        last1=last1->next;
    }
    last->data=v[0];
}
int main()
{
    Node *head;
    Node *one=new Node();
    Node *two=new Node();
    Node *three=new Node();
    Node *four=new Node();
    Node *five=new Node();

    one->data=5;
    two->data=6;
    three->data=7;
    four->data=8;
    five->data=9;

    head=one;
    one->next=two;
    two->next=three;
    three->next=four;
    four-> next=five;
    five->next=NULL;

    reverse(&head);
    print(head);
}