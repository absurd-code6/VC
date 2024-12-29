#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
int isEmpty(struct Node *top){
    if(top==NULL){
    return 1;
    } else{
    return 0;
    }
}
int isFull(struct Node *top){
    struct Node *p=(struct Node *)malloc(sizeof(struct Node));
    if(p==NULL){
    return 1;
    } else{
    return 0;
    }
}
struct Node *push(struct Node *top,int val) {
if(isFull(top)){
    printf("Stack Overflow! \n");
} else{
    struct Node *n=(struct Node*)malloc(sizeof(struct Node));
    n->data=val;
    n->next=top;
    top=n;
    return top;
}
}
void linked_list_traversal(struct Node *ptr){
    while(ptr!=NULL){
    printf("%d \n",ptr->data);
    ptr=ptr->next;
    }
}
int pop(struct Node ** top){
    if(isEmpty(*top)){
    printf("Stack Underflow! \n");
    } else{
    struct Node *n=*top;
    *top=(*top)->next;
    int val=n->data;
    free(n);
    return val;
    }
}
int peek(int pos){
struct  Node* ptr=top;
for(int i=0;(i<pos-1 && ptr!=NULL);i++)
{
    ptr=ptr->next;
}
if(ptr!=NULL){
    return ptr->data;
} else{
    return -1;
}
}
int main() {
struct Node *top=NULL;
top=push(top,4141414);
top=push(top,1729);
top=push(top,7777);
top=push(top,108);
linked_list_traversal(top);

int element=pop(&top);
printf("Popped element is %d \n");
for(int i=1;i<=4;i++){
printf("Value at position %d : %d \n",i,peek(i));
}
return 0;
}