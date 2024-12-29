#include<stdio.h>
#include<malloc.h>

struct tree{
    int data;
    struct tree* left;
    struct tree* right;
};

struct tree* createTree(int data){
    struct tree *n; // creating a node pointer
    n = (struct tree *) malloc(sizeof(struct tree)); // Allocating memory in the heap
    n->data = data; // Setting the data
    n->left = NULL; // Setting the left and right children to NULL
    n->right = NULL; // Setting the left and right children to NULL
    return n; // Finally returning the created node
}
struct tree * searchBST(struct tree * root,int key)
{
if(root==NULL){
return NULL;
}
if(key==root->data){
return root;
}
else if(key<root->data){
return searchBST(root->left,key);
} else{
    return searchBST(root->right,key);
}
}
int main(){
     
    // Constructing the root node - Using Function (Recommended)
    struct tree *t = createTree(5);
    struct tree *t1 = createTree(3);
    struct tree *t2 = createTree(6);
    struct tree *t3 = createTree(1);
    struct tree *t4 = createTree(4);
    
    t->left = t1;
    t->right = t2;
    t1->left = t3;
    t1->right = t4;
   struct tree * n=searchBST(t,4); 
   if(n!=NULL){
   printf("found :%d\n",n->data);
   }
   else{
    printf("Element not found");
   }
}