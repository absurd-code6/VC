
#include <stdio.h> //Return type
 int sum(int n);
int main()
{
printf("sum  is -> %d",sum(8));
return 0;
}
// recursive function 
   int sum(int n) {
   if(n==1) {
     return 1;
   }
   int sNum1 = sum( n-1); // sum of 1 to n 
   int sumN  = sNum1 + n;
   return sumN;
   }
   // Parameterised

/*#include<stdio.h>
void sum(int n,int s);
void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    sum(n,10);
}
void sum(int n,int s)
{
  if(n==0) {
  printf("Sum of 1st %d numbers is  %d",n,s);
  return;
  }
  sum(n-1,s+n);
  return;
}*/