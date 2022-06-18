#include "/home/piyush/C++/DSA OE/Tree.hpp"

void tree::preorder(tree **root)
{
    if(*root==NULL)
        return;
    
    cout<<(*root)->data<<" ";
    preorder(&(*root)->left_child);
    preorder(&(*root)->right_child);

}