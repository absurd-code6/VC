/*free()-used to free the memory previously allocated using malloc()/calloc()
free(ptr);*/
#include <stdio.h>
#include<stdlib.h>
int main() {
    int *ptr;
    int x= 90;
    ptr=(float*)calloc(6,sizeof(float));
    for(int i=0;i<6;i++)
    {
        printf("%f\n",ptr[i]);
    }
free(ptr);
ptr=&x;
printf("%d",*ptr);
    return 0;
}