// To determine the no of ways of reaching the nth stair//
//A kind of fibonacci series//
#include<stdio.h>
int stairpath(int n);
int main()
{
  int n;
  printf("Enter the  number of stairs:");
  scanf("%d",&n);
  printf("No of ways is:%d",stairpath(n));
  return 0;
}
int stairpath(int n)
{
    if(n==1)
    return 1;
    if(n==2)
    /*or
    if(n==1 || n==2) return n;
    or if(n<=2) return n;*/
    return 2;
 int ways=stairpath(n-1)+stairpath(n-2);
 return ways;
}