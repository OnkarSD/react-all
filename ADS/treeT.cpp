#include<stdlib.h>
#include<iostream>
using namespace std;

struct node 
{
    int data;
    struct node *left = NULL;
    struct node *right = NULL;

    node(int d)
    {
        data = d;
    }

};

void post(struct node* newnode)
{
    if(newnode == NULL)
        return;
    post(newnode->left);
    post(newnode->right);
    cout<<newnode->data<<" ";
}

void in(struct node* newnode)
{
    if(newnode == NULL)
        return;
    in(newnode->left);
    cout<<newnode->data<<" ";
    in(newnode->right);
    
}

void pre(struct node* newnode)
{
    if(newnode == NULL)
        return;
    cout<<newnode->data<<" ";
    pre(newnode->right);
    pre(newnode->left);
    
    
}

int main()
{
    struct node *root  = new node(70);
    root->left = new node(60);
    root->left->left = new node(50);
    root->right = new node(85);
    root->right->right = new node(90);

    cout<<"Post order : "<<endl;
    post(root);
    cout<<"\nPre order : "<<endl;
    pre(root);
    cout<<"\nIn order : "<<endl;
    in(root);

    return 0;
}