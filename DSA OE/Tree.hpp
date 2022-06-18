#ifndef _TREES_HPP_
#define _TREES_HPP_

#include<iostream>
using namespace std;

class tree
{
    public:
        int data;
        tree *left_child;
        tree *right_child;

        void insert(tree**);
        void preorder(tree**);
        void inorder(tree**);
        void postorder(tree**);
        void levelorder(tree**);
        void display(tree*);
};

#endif