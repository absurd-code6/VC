/*realloc()-used to reallocate(increase/decrease) memory 
using the same pointer and size
ptr=realloc(ptr,newsize);*/
/*#include <stdio.h>
#include<stdlib.h>
int main() {
// Allocate memory for 4 numbers & then dynamically increase it 9 numbers//
int *p;
p=(int*)calloc(4,sizeof(int));
printf("enter 4 numbers:");
for(int i=0;i<4;i++)
{
    scanf("%d",&p[i]);
}
for(int i=0;i<4;i++)
{
    printf("%d\n",p[i]);
}

realloc(p,8);
printf("After reallocation u can now enter 8 numbers:");
for(int i=0;i<8;i++)
{
    scanf("%d",&p[i]);
}

for(int i=0;i<8;i++)
{
    printf("%d\n",p[i]);
}
    return 0;
}*/

