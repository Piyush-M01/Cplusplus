#ifndef _DOUBLY_DEFINITIONS_HPP_
#define _DOUBLY_DEFINITIONS_HPP_

#include "/home/piyush/C++/DSA OE/DoublyLinkedList.hpp"

void DNode::insert_begin(DNode **head)
{
    cout<<"Enter the element to be inserted\n";
    int element;
    cin>>element;

    DNode *temp=new DNode();
    temp->data=element;
    temp->next=*head;
    temp->prev=NULL;

    *head=temp;
}


void DNode::insert_middle(DNode **head)
{
    cout<<"Enter the element to be inserted\n";
    int element;
    cin>>element;

    cout<<"Enter the position\n";
    int pos;
    cin>>pos;

    DNode *temp=new DNode();
    temp->data=element;

    int c=0;

    DNode *cur=*head;

    while(c!=pos-1)
    {
        cur=cur->next;
        c++;
    }
    temp->next=cur->next;
    cur->next=temp;
    temp->prev=cur;

}

void DNode::insert_end(DNode **head)
{
    cout<<"Enter the element to be inserted\n";
    int element;
    cin>>element;

    DNode *temp=new DNode();
    temp->data=element;
    temp->next=NULL;

    DNode *cur=*head;

    while(cur->next!=NULL)
    cur=cur->next;
    
    cur->next=temp;
    temp->prev=cur;
}

void DNode::delete_node(DNode **head)
{
    cout<<"Enter the element to be deleted\n";
    int element;
    cin>>element;

    DNode *cur_ptr=*head,*prev_ptr, *del_ptr;
    prev_ptr = cur_ptr;
    int c=0;
    while(cur_ptr->next != NULL)
    {
        if(cur_ptr->data == element && c==0)
        {   
            del_ptr = cur_ptr;
            cur_ptr = cur_ptr->next;
            cur_ptr->prev = NULL;
            free(del_ptr);
        }
        if(cur_ptr->data == element)
        {
            del_ptr = cur_ptr;
            prev_ptr->next = cur_ptr->next;
            cur_ptr->next->prev = prev_ptr;
            free(del_ptr);
            cur_ptr = prev_ptr;
        }
        prev_ptr = cur_ptr;
        cur_ptr = cur_ptr->next;
        c++;
    }
}

void DNode::print_list(DNode *head)
{
    DNode *h=head;
    if(h==NULL)
        cout<<"List is empty\n";
    while(h!=NULL) {
        cout<<"->"<<h->data;
        h=h->next;
    }
    cout<<endl;

}

#endif