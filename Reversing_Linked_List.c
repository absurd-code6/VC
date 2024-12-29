#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *next;
};
void linked_list_traversal(struct Node *ptr){
    while(ptr!=NULL){
    printf("%d \n",ptr->data);
    ptr=ptr->next;
    }
}
struct Node * reverse(struct Node * head) {
struct Node * nxt;
struct Node *curr=head;
struct Node *prev=NULL;
while(curr!=NULL){
nxt=curr->next;
curr->next=prev;
prev=curr;
curr=nxt;
}
return prev;
}
void main(){
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
printf("Linked List before Reversal \n");
linked_list_traversal(head);
head=reverse(head);
printf("Linked List after Reversal \n");
linked_list_traversal(head);


}