#include "/home/piyush/C++/DSA OE/Tree.hpp"

void tree::postorder(tree **root)
{
    if(*root==NULL)
        return;
    
    postorder(&(*root)->left_child);
    postorder(&(*root)->right_child);
    cout<<(*root)->data<<" ";

}