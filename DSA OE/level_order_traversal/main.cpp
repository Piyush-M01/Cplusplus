#include"../Tree.hpp"
#include "../preorder.hpp"
#include "../postorder.hpp"
#include "../inorder.hpp"
#include "level_order.hpp"

int main()
{
    tree *root=new tree();
    root->data=1;
    root->left_child=new tree();
    root->left_child->data=2;
    root->right_child=new tree();
    root->right_child->data=3;
    root->left_child->left_child=new tree();
    root->left_child->left_child->data=4;
    root->left_child->right_child=new tree();
    root->left_child->right_child->data=5;
    root->right_child->left_child=new tree();
    root->right_child->left_child->data=6;
    root->right_child->right_child=new tree();
    root->right_child->right_child->data=7;

    cout<<"Enter the operation to perform\n";
    int choice;
    cin>>choice;

    tree n1;

    switch(choice)
    {
        case 1:
            n1.preorder(&root);
            break;
        case 2:
            n1.inorder(&root);
            break;
        case 3:
            n1.postorder(&root);
            break;
        case 4:
            n1.levelorder(&root);
            break;
        default:
            cout<<"No operations to perform\n";
            break;
    }
    return 0;
}