// Array is a pointer that points in the 0th location of the arrray
// int *ptr=&arr[0]; OR int *ptr=arr; (name of array)Lets see traverse of array
#include<stdio.h>
void main()
{
int barcode[6];
// input
int *ptr=&barcode[0];
for(int i=0;i<6;i++) 
{
    printf("%d index:",i);
    scanf("%d",&barcode[i]); // OR scanf("%d",(ptr+i));   

}
// output
for(int i=0;i<6;i++) {
    printf("%d index: %d\n",i,barcode[i]);/*
    printf("%d index: %d\n",i,*(ptr+i)); */

}
}
