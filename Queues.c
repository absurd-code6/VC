#include <stdio.h>
#include<stdlib.h>
struct queue{
 int size;
 int f,r,*arr;
};
int isFull(struct queue *q){
    if(q->r==q->size-1)
    return 1;
    else
    return 0;
    }
int isEmpty(struct queue *q){
    if(q->r==q->f)
    return 1;
    else
    return 0;
}
void enqueue(struct queue *q,int val){
    if(isFull(q))
    printf("The Queue is full\n");
        else{
        q->r++;
        q->arr[q->r]=val;
        printf("%d enqueued\n",val);
    }
}
int dequeue(struct queue *q){
    int a=-1;
    if(isEmpty(q))
    printf("The Queue is Empty.Nothing can be dequeued\n");
    else{
        q->f++;
       a= q->arr[q->f];
    }
 return a;
 
}

int main() {
struct queue q;
q.size=4;
q.r=q.f=-1;
q.arr=(int*)malloc(q.size*sizeof(int));
enqueue(&q,12);
enqueue(&q,13);
printf("%d dequeued\n",dequeue(&q));
printf("%d dequeued\n",dequeue(&q));
/*enqueue(&q,1);
enqueue(&q,2);
enqueue(&q,3);
enqueue(&q,4);*/
if (isEmpty(&q)) {
    printf("Queue is empty\n");
} 
/*if(isFull(&q)) {
    printf("Queue is full\n");
} */
return 0;
}