#ifndef __LEVEL_ORDER_HPP__
#define __LEVEL_ORDER_HPP__

#include "../Tree.hpp"
#include<queue>

void tree::levelorder(tree** root)
{
    tree** arr[100];
    int f=0,r=-1;
    arr[++r]=root;
    tree* cur;
    while(f<=r)
    {
        cur=*arr[f++];
        cout<<cur->data<<" ";
        if(cur->left_child!=NULL)
        {
            arr[++r]=&(cur->left_child);
        }
        if(cur->right_child!=NULL)
        {
            arr[++r]=&(cur->right_child);
        }
    }
    cout<<endl;
}

#endif