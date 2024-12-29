/*Dynamic Memory Allocation- A way to allocate memory 
to a data structure during the runtime.We need some funcns to allocate and free 
memory dynamically- malloc(),calloc(),free(),realloc().m ofr memory alloctn
c for continue and realloc for re-alloctn
malloc()-takes no of bytes to be allocated & returns a pointer of type void
ptr=(int*(called typecast))malloc(5(no of bytes)*sizeof(int));*/
#include<stdio.h>
#include<stdlib.h>
int main() {
    int *ptr;
    printf("%d\t",sizeof(int));
    printf("%d\t",sizeof(float));
    printf("%d\n",sizeof(char));

    ptr=(int*)malloc(5*sizeof(int));
    ptr[0]=0;
    ptr[1]=1;
    ptr[2]=0;
    ptr[3]=1;
    for(int i=0;i<4;i++)
    {
        printf("%d\n",ptr[i]);
}
    return 0;
}