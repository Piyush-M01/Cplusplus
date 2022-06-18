#ifndef _DEFINITIONS_HPP_
#define _DEFINITIONS_HPP_

#include "/home/piyush/C++/DSA OE/linkedlist.hpp"

void Node::insert_begin(Node **head)
{
    cout<<"Enter the element to be inserted\n";
    int element;
    cin>>element;

    Node *temp=new Node();
    temp->data=element;
    temp->next=*head;

    *head=temp;
}


void Node::insert_middle(Node **head)
{
    cout<<"Enter the element to be inserted\n";
    int element;
    cin>>element;

    cout<<"Enter the position\n";
    int pos;
    cin>>pos;

    Node *temp=new Node();
    temp->data=element;

    int c=0;

    Node *cur=*head;

    while(c!=pos-1)
    {
        cur=cur->next;
        c++;
    }
    temp->next=cur->next;
    cur->next=temp;
}

void Node::insert_end(Node **head)
{
    cout<<"Enter the element to be inserted\n";
    int element;
    cin>>element;

    Node *temp=new Node();
    temp->data=element;
    temp->next=NULL;

    Node *cur=*head;

    while(cur->next!=NULL)
    cur=cur->next;
    
    cur->next=temp;
}

void Node::delete_node(Node **head)
{
    cout<<"Enter the element to be deleted\n";
    int element;
    cin>>element;

    Node *cur=*head;

    while(cur->next->data!=element)
    {
        cur=cur->next;
    }
    
    if(cur->next->next!=NULL)
    cur->next=cur->next->next;
    else
    cur->next=NULL;
}

void Node::print_list(Node *head)
{
    Node *h=head;
    if(h==NULL)
        cout<<"List is empty\n";
    while(h!=NULL) {
        cout<<"->"<<h->data;
        h=h->next;
    }
    cout<<endl;
    //cout<<head->data<<" ";
}

#endif