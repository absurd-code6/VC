// Using recursion to calculate the a number raised to some power //
#include<stdio.h>
int power(int n,int p);
int main()
{
    int n,p;
    printf("Enter a number and its power:");
    scanf("%d%d",&n,&p);
    int b=power(n,p);
    printf("%d raised to the power of %d is %d",n,p,b);
    //OR printf("Ans is %d",power(n,3));
    return 0;
}
int power(int n,int p)
{
  if(p==0) {
  return 1 ;
  }
  int a=n*power(n,p-1);
  return a;
}