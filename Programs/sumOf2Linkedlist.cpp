#include<iostream>
#include<vector>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
};
int sum(Node **head,Node** head2)
{
    Node *last=*head;
    Node *last1=*head2;
    int sum=0,num=0;
    while(last->next!=NULL)
    {
        num=num*10+last->data;
        last=last->next;
    }
    num=num*10+last->data;
    sum=sum+num;
    num=0;
    while (last1->next!=NULL)
    {
        num=num*10+last1->data;
        last1=last1->next;
    }
    num=num*10+last1->data;
    sum=sum+num;
    return sum;
}

int main()
{
    Node *head,*head2;
    Node *one=new Node();
    Node *two=new Node();
    Node *three=new Node();
    Node *four=new Node();
    Node *five=new Node();
    Node *six=new Node();

    one->data=2;
    two->data=4;
    three->data=3;
    four->data=5;
    five->data=6;
    six->data=4;

    head=one;
    one->next=two;
    two->next=three;
    three->next=NULL;

    head2=four;
    four-> next=five;
    five->next=six;
    six->next=NULL;

    cout<<sum(&head,&head2);
}