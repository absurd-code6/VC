#include<stdio.h>
int main()
{
int numbers[100]={7,2,3,1,5,10};
 int max=numbers[0];
int min=numbers[0];
 for(int i=0;i<6;i++)
 {
    if(numbers[i]>max)
     max=numbers[i];
     if(numbers[i]<min)
     min=numbers[i];
 }
 printf("Maximum is %d\n",max);
 printf("Minimum is %d\n",min);
    return 0;
}