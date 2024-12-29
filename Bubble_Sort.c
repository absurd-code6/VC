//Introduction to Bubble & Adaptive Bubble Sort
#include<stdio.h>

void display(int arr[],int size){
for(int i=0;i<size;i++){
printf("%d\n",arr[i]);
}
}
void bubble(int arr[],int size){
int temp;
for(int i=0;i<size-1;i++) //For no of passes
{
    for(int j=0;j<size-1-i;j++)
    {
        if(arr[j]>arr[j+1]){  // For no of comparisons in each pass
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
              /* if(arr[j]<arr[j+1]){
        temp=arr[j+1];
        arr[j+1]=arr[j];
        arr[j]=temp;
        }*/
    
 
        }
    }
}
}

void adaptive_bubble(int arr[],int size){  // Adaptive Bubble Sort
int temp;
int isSorted=0;
for(int i=0;i<size-1;i++) //For no of passes
{
    printf("Working on pass number %d\n",i+1);
    //isSorted=1; u can write the condn here also
    for(int j=0;j<size-1-i;j++)
    {
        if(arr[j]>arr[j+1]){  // For no of comparisons in each pass
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        isSorted=0;
       }
       else
       isSorted=1;
    }
    if(isSorted){
     return;
    }
  }
}
void main()
{
int arr[100],n;
printf("Enter the size of array:");
scanf("%d",&n);
printf("Eter %d numbers:",n);
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("Before Bubble Sort\n");
display(arr,n);
bubble(arr,n);
//adaptive_bubble(arr,n);
printf("After Bubble Sort\n");
display(arr,n);

}