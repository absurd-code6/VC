/* Print the value of i form its pointer to pointer */
#include <stdio.h>
int main()
{
int i = 20;
int *pr = &i;
int **ptr = &pr;
printf("%d\n",**ptr);
   return 0;   
}