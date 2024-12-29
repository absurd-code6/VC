//Creation And Traversal OF LinkedLists
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
int main()
{
struct Node *head;
struct Node *second;
struct Node *third;
//Allocating memory for nodes in the linked list in heap
head=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));
third=(struct Node*)malloc(sizeof(struct Node));
//Link first(head) and 2nd nodes
head->data=4141414;
head->next=second;
//Link 2nd and 3rd nodes
second->data=91758;
second->next=third;
third->next=NULL; //Termination of linked list @ 3rd node
linked_list_traversal(head);
return 0; 
}
