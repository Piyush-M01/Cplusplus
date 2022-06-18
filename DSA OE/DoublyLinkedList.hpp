#ifndef _DOUBLYLINKED_LIST_HPP_
#define _DOUBLYLINKED_LIST_HPP_

#include<iostream>
using namespace std;

class DNode
{

    public:
        int data;
        DNode *next;
        DNode *prev;
        void insert_begin(DNode**);
        void insert_middle(DNode**);
        void insert_end(DNode**);
        void delete_node(DNode**);
        void print_list(DNode*);
};

#endif