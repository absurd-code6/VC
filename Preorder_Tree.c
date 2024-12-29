#include<stdio.h>
#include<stdlib.h>

struct tree {
int data;
struct tree * left;
struct tree * right;
};
struct tree *createTree(int data){
struct tree *t; // creating the node pointer
t=(struct tree *)malloc(sizeof(struct tree)); // allocating memory in the heap
t->data=data; // setting the data
t->left=NULL; // setting left children to NULL
t->right=NULL; // setting right children to NULL
return t; // Finally returning the created node
}
void preorder(struct tree * root)
{
if(root!=NULL){
    printf("%d\n",root->data);
    preorder(root->left);
    preorder(root->right);
}
}
void main()
{
struct tree *t=createTree(4141414);
struct tree *t1=createTree(514821479);
struct tree *t2=createTree(4);
struct tree *t3=createTree(6);
struct tree *t4=createTree(9);

t->left=t1;
t->right=t2;
t1->left=t3;
t1->right=t4;
preorder(t);

}