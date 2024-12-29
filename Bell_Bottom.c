//StackTop and StackBottom(Tme Complexity) Operations
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
        printf("Not a valid position");
        return -1;
    }
    else {
        return s->arr[arrindex];
    }
}
int stackTop(struct stack *s){
    return s->arr[s->top];
}
int stackBottom(struct stack *s){
    return s->arr[0];
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
printf("The topmost value is %d\n",stackTop(s));
printf("The bottom-most value is %d",stackBottom(s));
    return 0;
}