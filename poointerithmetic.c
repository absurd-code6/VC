#include<stdio.h>
int main()
{
    int size;
    int val=115;
    int *ptr=&val;
    printf("address= %u",ptr);
    printf("\n");
    ptr++;       // increment by 1 datatype
    printf("address= %u",ptr);
    printf("\n");
    ptr--;      //  decrement by 1 datatype
    printf("address= %u",ptr);
    
    size=(ptr++)-(ptr);
    printf("\n");
    printf("Size is %d bytes",size);
    return 0;
}

