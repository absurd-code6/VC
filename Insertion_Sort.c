#include<stdio.h>

void display(int arr[],int size){
for(int i=0;i<size;i++){
printf("%d\n",arr[i]);
}
}
void insert(int arr[],int n)
{
    for(int i=1;i<=n-1;i++) // Loop for passes 
    {
    int key=arr[i];
    int j=i-1;
    while(j>=0 && arr[j]<key) // Loop for each pass
// arr[j]>key for ascending order and
 // arr[j]<key for descending order
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key; 

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
printf("Before Insertion Sort\n");
display(arr,n);
insert(arr,n);
//adaptive_bubble(arr,n);
printf("After Insertion  Sort\n");
display(arr,n);
}