#include <stdio.h>
int main() {
   int n;
   printf("enter the decimal no -> ");
   scanf("%d",&n);
   int bin;
   int ary;
   for(int i=n;i>=1;i/=2){
       bin=i%2;
       /*bin=i;
       ary=bin%2;*/
      
   printf("%d",bin);
   } 
   return 0;
}