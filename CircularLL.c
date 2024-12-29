#include<stdio.h>
#include<stdlib.h>

struct Node {
int data;
struct Node*next;
};
void linked_list_traversal(struct Node *head){
    struct Node *ptr=head;
   do {
    printf("%d \n",ptr->data);
    ptr=ptr->next;
    }while(ptr!=head);
}
struct Node* insert_at_1st(struct Node *head,int data){
struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
ptr->data=data;
struct Node *p = head->next;
while(p->next != head){
    p=p->next;
}
//At this point p points to the last node of rhis ciruclar linked list
p->next=ptr;
ptr->next=head;
head=ptr;
return head;
}
int main()
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
fourth->next=head;
linked_list_traversal(head);
head=insert_at_1st(head,39);
printf("After Insertion @ beginning \n");
linked_list_traversal(head);
return 0; 
}
