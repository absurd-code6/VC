/*calloc()- initializes with 0,
ptr=(float*)calloc(6(no of locations),sizeof(float)(size of each location)); 
returns void pointer which is typecasted into float/int/char pointers*/
#include<stdio.h>
#include<stdlib.h>
int main() {
    int *ptr;
    ptr=(float*)calloc(6,sizeof(float));
    for(int i=0;i<6;i++)
    {
        printf("%f\n",ptr[i]);
    }
return 0;
}