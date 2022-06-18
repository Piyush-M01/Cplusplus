#ifndef _LINKED_LIST_HPP_
#define _LINKED_LIST_HPP_

#include<iostream>
using namespace std;

class Node
{

    public:
        int data;
        Node *next;
        void insert_begin(Node**);
        void insert_middle(Node**);
        void insert_end(Node**);
        void delete_node(Node**);
        void print_list(Node*);
};

#endif