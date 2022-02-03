#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Node
{
    public:
    int data;
    Node *left,*right;
};
int f=0;
vector<int> st;
void getSum(Node **root)
{
    Node *current=*root;
    if(current == NULL)
    return;
    getSum(&current->left);
    if(current->data==f)
    {
        f= (current->left->data+current->right->data);
    }
    getSum(&current->right);
}
void search(Node **root,int val)
{
    Node *current=*root;
        if(current == NULL)
        {
            return;
        }
        /*if(current->left->data==val || current->right->data==val)
            {
                f=current->data;
            }*/
        search(&current->left,val);
        st.push_back(current->data);
        if(current->data==val)
        f=val;
        search(&current->right,val);

}
void delete1()
{
    for (int i=0;i<st.size();i++)
    {
        cout<<st[i]<<" ";
        if(st[i]==f)
            f=st[i+2];
    }
}
int main()
{
    
    cout<<"Enter key"<<"\n";
    int k;
    cin>>k;
    Node *root = new Node();
    root->data=1;
    root->left = new Node();
    root->left->data=3;
    root->right = new Node();
    root->right->data=7;
    root->left->left = new Node();
    root->left->left->data=6;
    root->left->right = new Node();
    root->left->right->data=5;
    root->left->right->left = new Node();
    root->left->right->left->data=10;
    root->right->left = new Node();
    root->right->left->data=4;
    root->right->right = new Node();
    root->right->right->data=13;
    root->right->left->left = new Node();
    root->right->left->left->data=17;
    root->right->left->right = new Node();
    root->right->left->right->data=15;
    search(&root,k);
    delete1();
    getSum(&root);
    cout<<f;
}