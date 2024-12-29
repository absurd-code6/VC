#include<stdio.h>
#include<stdlib.h>

struct tree{
    int data;
    struct tree* left;
    struct tree* right;
};

struct tree* createTree(int data){
    struct tree *n;
    n = (struct tree *) malloc(sizeof(struct tree));  
    n->data = data; 
    n->left = NULL;
    n->right = NULL; 
    return n; 
}
struct tree * searchIter(struct tree * root,int key)
{
while(root!=NULL){
if(key==root->data){
return root;
}
else if(key<root->data){
root=root->left;
} else{
root = root->right;
}
}
return NULL;
}
void insert(struct tree * root,int key)
{
struct tree *prev=NULL;
while(root!=NULL)
{
prev=root;
if(key==root->data){
printf("Cannot Insert %d as it's already there!!\n",key);
return;
}
else if(key< root->data){
    root=root->left;
}
else
root=root->right;
} 

struct tree* new=createTree(key);
if(key<prev->data){
prev->left=new;
}
else{
prev->right=new;
}
}
int main(){
     
    struct tree *t = createTree(5);
    struct tree *t1 = createTree(3);
    struct tree *t2 = createTree(6);
    struct tree *t3 = createTree(1);
    struct tree *t4 = createTree(4);
    
    t->left = t1;
    t->right = t2;
    t1->left = t3;
    t1->right = t4;
    insert(t,81); 
    printf("%d Inserted in the Tree!\n",t->right->right->data);
}