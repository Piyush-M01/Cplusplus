#include "/home/piyush/C++/DSA OE/Tree.hpp"

void tree::inorder(tree **root)
{
    if(*root==NULL)
        return;
    
    inorder(&(*root)->left_child);
    cout<<(*root)->data<<" ";
    inorder(&(*root)->right_child);

}