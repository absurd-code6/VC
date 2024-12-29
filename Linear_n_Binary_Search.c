#include<stdio.h>

int LinearSearch(int arr[],int size,int item)
{
for(int i=0;i<size;i++){
    if(arr[i]==item)
    return i;
}
    return -1;
}
int BinarySearch(int arr[],int size,int item)
{
    int mid,low,high;
    low=0;
    high=size-1;
     while(low<=high)
    {
    mid=(low+high)/2;
    if(arr[mid]==item)
    return mid;
    else if(arr[mid]<item)
    {
    low=mid+1;
    }
    else
    {
    high=mid-1;
    }
    }
    
    return -1;
}
void main()
{

int arr[100],n,item; // 9,14,4,8,7,5,6
printf("Enter the size of array:");
scanf("%d",&n);
printf("Enter %d numbers:\n",n);
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("Enter the item you want to find in the array:");
scanf("%d",&item);
/*int index=LinearSearch(arr,n,item);
if(LinearSearch(arr,n,item)!=-1)
printf("The item %d was found at index %d\n",item,index);
 else if(LinearSearch(arr,n,item)==-1)
printf("The item %d is not in the array\n",item);*/

int index=BinarySearch(arr,n,item);
if(BinarySearch(arr,n,item)!=-1)
printf("The item %d was found at index %d\n",item,index);
else if(BinarySearch(arr,n,item)==-1)
printf("The item %d is not in the array\n",item);
}