#include<stdio.h>
#include<stdlib.h>
void display(int arr[],int n){
for(int i=0;i<n;i++){
printf("%d\n",arr[i]);
}
}
void merge(int arr[],int mid,int low,int high) 
{
int i,j,k,B[100];  // Dynamically allocate B as B[high-low+1];
i=low;
j=mid+1;
k=low;
while(i<=mid && j<=high)
{
if(arr[i]<arr[j]){
B[k]=arr[i];
i++;
k++;
} else{
B[k]=arr[j];
j++;
k++;
}
}
while(i<=mid){
    B[k]=arr[i];
    k++;
    i++;
}
while(j<=high){
    B[k]=arr[j];
    k++;
    j++;
}
for(int i=low;i<=high;i++){
    arr[i]=B[i];
}
}
void mergesort(int arr[],int low,int high)
{
    int mid;
    if(low<high){
    mid=(low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);    
    merge(arr,mid,low,high);        
  }
}

void main()
{
int arr[100],n; // 9,14,4,8,7,5,6(14 is not being printed)
printf("Enter the size of array:");
scanf("%d",&n);
printf("Enter %d numbers:\n",n);
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("Given array is :\n");
display(arr,n);
mergesort(arr,0,n-1 ); //Originally n but n-1 is working
printf("Performing Merge Sort\n");
display(arr,n);
}
