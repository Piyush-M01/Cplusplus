#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *leftchild;
    Node *rightchild;
};
void insert(Node **root)
{
    int val;
    printf("enter the value \n");
    scanf("%d",&val);
    Node *temp=new Node();
    Node *current;
    Node *parent;
    temp->data=val;
    temp->leftchild=NULL;
    temp->rightchild=NULL;
    if(root==NULL)
    {
        *root=temp;
    }
    else
    {
        current=*root;
        parent=NULL;
        while(1)
        {
            parent=current;
            if(parent->data >val)
                {
                    current=current->leftchild;
                    if(current==NULL)
                    {
                        parent->leftchild=temp;
                        return;
                    }
                }
            else
            {
                current=current->rightchild;
                if(current==NULL)
                {
                    parent->rightchild=temp;
                    return;
                }
            }
        }
    }
}
void search(Node **root)
{
    int val,f=0;
    printf("Enter the value to be searched \n");
    cin>>val;
    Node *current=*root;
    while(current!=NULL)
    {
        if(current->data==val)
        {
            f++;
            printf("VALUE FOUND \n");
            break;
        }
        else if(current->data>=val)
        {
            current=current->leftchild;
        }
        else
        current=current->rightchild;
    }
    if (f==0)
    printf("NOT FOUND \n");
}
void inorder(Node **root)
{
    Node *current=*root;
    if(current==NULL)
    return;
    inorder(&(current->leftchild));
    cout<<current->data;
    inorder(&(current->rightchild));
}
void preorder(Node **root)
{
    Node *current=*root;
    if(current==NULL)
    {
        return;
    }
    cout<<current->data;
    preorder(&(current->leftchild));
    preorder(&(current->rightchild));
}
void postorder(Node **root)
{
    Node *current=*root;
    if(current==NULL)
    {
        return;
    }
    postorder(&(current->leftchild));
    postorder(&(current->rightchild));
    cout<<current->data;
}
int main()
{

    Node* root = new Node();
    root->data=1;
    root->leftchild = new Node();
    root->leftchild->data=2;
    root->rightchild = new Node();
    root->rightchild->data=3;
    root->leftchild->leftchild = new Node();
    root->leftchild->leftchild->data=4;
    root->rightchild->leftchild = new Node();
    root->rightchild->leftchild->data=5;
    root->rightchild->rightchild = new Node();
    root->rightchild->rightchild->data=6;
    root->rightchild->leftchild->leftchild = new Node();
    root->rightchild->leftchild->leftchild->data=7;
    root->rightchild->leftchild->rightchild = new Node();
    root->rightchild->leftchild->rightchild->data=8;
    //inorder(&root);
    //preorder(&root);
    postorder(&root);
    /*Node *root;
    int choice;
    printf("Enter: \n 1 for insertion \n 2 for searching \n 3 for inorder traversal \n 4 for preorder traversal \n 5 for postorder traversal \n");
    printf("Enter choice \n");
    cin>>choice;
    while(choice<=5)
    {
        switch(choice)
        {
            case 1:
            insert(&root);
            break;
            case 2:
            search(&root);
            break;
            case 3:
            inorder(&root);
            break;
            //case 4:
            //preorder(&root);
            //case 5:
            //postorder(&root);
            //default:
            //printf("Not a valid option");
        }
        printf("Enter choice \n");
        cin>>choice;
    }*/
    return 0;
}