#include<stdio.h>

void main() {
    int ar1[5]={2,1,7,5,3};
    int ar2[5]={15,11,12,16,10},ar3[10];
    int i,j,temp,k=0;
    for(i=0;i<10;i++)
    {
        ar3[i]=ar1[i];
    if(i>4)
    {
    ar3[i]=ar2[k];
    k++;
    }
    }

  for(i=0;i<10;i++)
  {
   printf("%d",ar3[i]);
  }

  for(i=0;i<10-1;i++)
  {
    for(j=i+1;j<10;j++)
    {
     if(ar3[j]>ar1[i])
     {
        temp=ar1[i];
        ar1[i]=ar3[j];
        ar3[j]=temp;
     }
    }
}
printf("Sorted elements are:");
    for(i=0;i<10;i++)
    {
        printf("%d",ar3[i]);
    }

}