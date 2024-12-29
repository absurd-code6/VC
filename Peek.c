// Peek Operation in stacks 
/*In computer science, peek is an operation on certain abstract data types, specifically sequential collections such as stacks and queues, which returns the value of the top ("front") of the collection without removing the element from the collection.
*/
#include <stdio.h>
#include<stdlib.h>
struct stack{
int size;
int top;
int *arr;
};
int isEmpty(struct stack *ptr) {
    if(ptr->top==-1)
    return 1;
    else
    return 0;
}
int isFull(struct stack *ptr) {
    if(ptr->top==ptr->size-1)
    return 1;
    else 
    return 0;
}
void push(struct stack *ptr,int value){
  if(isFull(ptr)){
  printf("Stack Overflow. %d Cannot be pushed\n",value);
  } else {
      ptr->top++;
      ptr->arr[ptr->top]=value;
  }
}
int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow. Nothing can be poped\n");
        return -1;
    } else {
        int value=ptr->arr[ptr->top];
        ptr->top=ptr->top-1; //ptr->top--;
        return value;
    }
}

int peek(struct stack *s,int i) {
    int arrindex=s->top-i+1;
    if(arrindex<0){
        printf("Not a valid position\n");
       return -1;
    }
    else {
        return s->arr[arrindex];
    }
}
int main() {
struct stack * s=(struct stack *)malloc(sizeof(struct stack));
s->size=4;
s->top=-1;
s->arr=(int*)malloc(s->size*sizeof(int));
printf("Stack has been created succesfully!\n");
printf("Before pushing Empty:%d\n",isEmpty(s));
printf("Before pushing Full:%d\n",isFull(s));
push(s,1);
push(s,2);
push(s,3);
push(s,4);
push(s,5);
printf("After pushing Empty:%d\n",isEmpty(s));
printf("After pushing FUll:%d\n",isFull(s));
//Printing the values from the stack
for(int j=1;j<=s->top+1;j++){
    printf("The value at position %d is %d\n",j,peek(s,j));
}
    return 0;
}