#include<stdio.h>
#include<stdlib.h>

struct Node {
int data;
struct Node*next;
};
void linked_list_traversal(struct Node *ptr){
    while(ptr!=NULL){
    printf("%d \n",ptr->data);
    ptr=ptr->next;
    }
}
struct Node * delete_from_1st(struct Node *head){
    struct Node *ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
struct Node * delete_from_bw(struct Node *head,int idx){ //or del_at_idx
    struct Node *ptr=head;
    struct Node *q=head->next;
    for(int i=0;i<idx-1;i++){//idx-1 bcoz it's starting frm idx 1(0 means starting node,we have already written a function for that previously) & cannot delete frm idx 0
    ptr=ptr->next;
    q=q->next;
    }
    ptr->next=q->next;
    free(q);
    return head;
}
struct Node * delete_from_last(struct Node *head){ 
    struct Node *ptr=head;
    struct Node *q=head->next;
    while(q->next!=NULL){
    ptr=ptr->next;
    q=q->next;
    }
    ptr->next=NULL;
    free(q);
    return head;
}
struct Node * delete_node_wh_value(struct Node *head,int value){ 
    struct Node *ptr=head;
    struct Node *q=head->next;
    while(q->data!=value && q->next!=NULL){
    ptr=ptr->next;
    q=q->next;
    }
if (q->data==value )
{
ptr->next=q->next;
    free(q);
}
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
printf("Before Deletion\n");
linked_list_traversal(head);
//head=delete_from_1st(head);

//head=delete_from_bw(head,2);

// head=delete_from_last(head);
head=delete_node_wh_value(head,143);

//printf("After Deletion from 1st\n");

// printf("After Deletion from bw\n");

// printf("After Deletion from last\n");
printf("After Deletion of iluvu node\n");

linked_list_traversal(head);

}
