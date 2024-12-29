#include<stdio.h>
#include<stdlib.h>

struct Node {
int data;
struct Node * next;
};
void linked_list_traversal(struct Node *ptr){
    while(ptr!=NULL){
    printf("%d \n",ptr->data);
    ptr=ptr->next;
    }
}
struct Node * insert_at_1st(struct Node *head,int data){
   struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
   ptr->next=head;
   //head=ptr;
   ptr->data=data;
   return ptr; 
}
struct Node * insert_at_index(struct Node *head,int data,int index)
{
 struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
 struct Node *p=head;
 int i=0;
 while(i!=index-1){
    p=p->next;
    i++;
 }
 ptr->data=data;
 ptr->next=p->next;
 p->next=ptr;
 return head;
}
struct Node * insert_at_end(struct Node *head,int data){
  struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
  struct Node *p=head;
  ptr->data=data;
  while(p->next!=0){ // Or while(p->next!=NULL)
   p=p->next;
  }
p->next=ptr;
ptr->next=NULL;
 return head;
}
struct Node * insert_after_node(struct Node *head,struct Node *prevNode,int data)
{
struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
ptr->data=data;
ptr->next=prevNode->next;
prevNode->next=ptr;
return head;
}
void main()
{
struct Node *head;
struct Node *second;
struct Node *third;
struct Node *fourth;
head=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));
third=(struct Node*)malloc(sizeof(struct Node));
fourth=(struct Node*)malloc(sizeof(struct Node));
head->data=4141414;
head->next=second;
second->data=91758;
second->next=third;
third->data=143;
third->next=fourth;
fourth->data=115;
fourth->next=NULL;
linked_list_traversal(head);
//head=insert_at_1st(head,1729);
head=insert_at_index(head,373,3);
//head=insert_at_end(head,666);
//head=insert_after_node(head,second,7777);

//printf("Inserting Node @ the beginning \n");
printf("Inserting in the middle/between \n");
//printf("Inserting @ the end \n");
//printf("Inserting after node \n");
linked_list_traversal(head);
}
