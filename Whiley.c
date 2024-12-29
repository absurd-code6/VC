#include <stdio.h>

int main()
{
// do {
   // do something
//} while(condition); 
int i=10000000;
do {
    printf("%d\n",i);
    i-=1; // or i--;
} while(i>=1);
    return 0;
}