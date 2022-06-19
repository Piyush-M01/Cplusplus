#ifndef __TREE_HPP__
#define __TREE_HPP__

#include<iostream>
#include<stack>
using namespace std;

class tree
{
    public:

        void preorder(tree**);
        void inorder(tree**);
        void postorder(tree**);

        tree* left_child;
        tree* right_child;
        int data;

        stack<tree**> st;

};

#endif