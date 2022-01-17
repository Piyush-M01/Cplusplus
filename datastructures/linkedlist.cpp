//Singly linked list
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
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
void insert_start(Node **n1)
{
    int data1;
    cout<<"Enter data:"<<endl;
    cin>>data1;
    Node *n=NULL;
    n=new Node();
    n->data=data1;
    n->next=*n1;
    *n1=n;
}
void insert_end(Node **n)
{
    Node *n1=new Node();
    int d;
    cout<<"Enter the data"<<endl;
    cin>>d;
    Node* last=*n;
    n1->data=d;
    n1->next=NULL;

    //check if the list is empty or not
    if(*n==NULL)
    {
        *n=n1;
        return;
    }

    while(last->next!=NULL)
    {
        last=last->next;
    }
    last->next=n1;
}

void insert_random(Node **head)
{
    Node *last=*head;
    Node *n=new Node();
    cout<<"Enter the position where you want to enter the new node and data"<<endl;
    int pos,d;
    cin>>pos>>d;
    int c=0;
    while(c!=pos-1)
    {
        c++;
        last=last->next;
    }
    n->data=d;
    n->next=last->next;
    last->next=n;
}

void del(Node **head)
{
    Node *last=*head;
    int pos,c=1;
    cout<<"enter position"<<endl;
    cin>>pos;
    if(pos==1)
    {
        *head=last->next;
        free(last);
    }
    else
    {
        while(c<pos-1)
        {
            c++;
            last=last->next;
        }
        last->next=last->next->next;
    }
}

int main()
{
Node *head;
Node *one = NULL;
Node *two = NULL;
Node *three = NULL;

//Allocate memory 
one = new Node();
two = new Node();
three = new Node();

//Assign data values 
one->data = 1;
two->data = 2;
three->data=3;

//Connect nodes 
one->next = two;
two->next = three;
three->next = NULL;

//Save address of first node in head 
cout<<"Elements of linked list"<<endl;
head = one;
print(head);
cout<<"Insertion at the start"<<endl;
insert_start(&head);
print(head);
cout<<"Insertion at end"<<endl;
insert_end(&head);
print(head);
cout<<"insertion after the position entered"<<endl;
insert_random(&head);
print(head);

cout<<"Deletion of node"<<endl;
del(&head);
print(head);
}