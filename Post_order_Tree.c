#include<stdio.h>
#include<stdlib.h>

struct tree {
int data;
struct tree * left;
struct tree * right;
};
struct tree *createTree(int data){
struct tree *t; 
t=(struct tree *)malloc(sizeof(struct tree)); 
t->data=data;
t->left=NULL; 
t->right=NULL; 
return t; 
}
void postorder(struct tree * root)
{
if(root!=NULL){
    postorder(root->left);
    postorder(root->right);
    printf("%d\n",root->data);

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
postorder(t);

}