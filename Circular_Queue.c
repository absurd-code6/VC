#include <stdio.h>
#include<stdlib.h>
struct Cirqueue{
 int size;
 int f,r,*arr;
};
int isFull(struct Cirqueue *q){
    if((q->r+1)%q->size==q->f)
    return 1;
    else
    return 0;
    }
int isEmpty(struct Cirqueue *q){
    if(q->r==q->f)
    return 1;
    else
    return 0;
}
void enqueue(struct Cirqueue *q,int val){
    if(isFull(q))
    printf("The Queue is full\n");
        else{
        q->r=(q->r+1)%q->size;;
        q->arr[q->r]=val;
        printf("%d enqueued\n",val);
    }
}
int dequeue(struct Cirqueue *q){
    int a=-1;
    if(isEmpty(q))
    printf("The Queue is Empty.Nothing can be dequeued\n");
    else{
        q->f=(q->f+1)%q->size;
       a= q->arr[q->f];
    }
 return a;
 
}

int main() {
struct Cirqueue q;
q.size=4;
q.r=q.f=0;
q.arr=(int*)malloc(q.size*sizeof(int));
enqueue(&q,12);
enqueue(&q,13);
enqueue(&q,4);
printf("%d dequeued\n",dequeue(&q));
printf("%d dequeued\n",dequeue(&q));
printf("%d dequeued\n",dequeue(&q));
/*enqueue(&q,1);
enqueue(&q,2);
enqueue(&q,3);
enqueue(&q,5);*/
if (isEmpty(&q)) {
    printf("Queue is empty\n");
} 
/*if(isFull(&q)) {
    printf("Queue is full\n");
} */
return 0;
}