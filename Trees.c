//Linked Representation in C
#include<stdio.h>
#include<malloc.h>
struct node {
int data;
struct node * left;
struct node * right;
};
struct node *createTree(int data){
struct node *n; // creating the node pointer
n=(struct node *)malloc(sizeof(struct node)); // allocating memory in the heap
n->data=data; // setting the data
n->left=NULL; // setting left children to NULL
n->right=NULL; // setting right children to NULL
return n; // Finally returning the created node
}
void main()
{
/*// Costructing the root node

struct node *p;
p=(struct node *)malloc(sizeof(struct node));
p->data=4141414;
p->left=NULL;
p->right=NULL;
// Costructing the 1st node

struct node *p1;
p1=(struct node *)malloc(sizeof(struct node));
p->data=514821479;
p1->left=NULL;
p1->right=NULL;
// Costructing the 2nd node

struct node *p2;
p2=(struct node *)malloc(sizeof(struct node));
p->data=1729;
p2->left=NULL;
p2->right=NULL;
// Linking the root node with the left and right children

p->left=p1;
p->right=p2;*/

// Costructing the root node using function
struct node *p=createTree(4141414);
struct node *p1=createTree(514821479);
struct node *p2=createTree(1729);

p->left=p1;
p->right=p2;

}