#include "tree.hpp"

void tree::preorder(tree** root)
{
    if(root==NULL)
        return;
    
    st.push(root);
    

    tree **cur=root;
    int c=0;
    while(!st.empty())
    {
        cur=st.top();
        // if(c==3)
        // {
        //     break;
        // }
        printf("%d ", (*cur)->data);
        st.pop();
        if(&(*cur)->right_child->data>=0)
        st.push(&(*cur)->right_child);
        if(&(*cur)->left_child->data=0)
        st.push(&(*cur)->left_child);
        //st.pop();
        c++;
        //break;
    }
}