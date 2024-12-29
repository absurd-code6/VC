#include<stdio.h>
void main() 
{
    int n,r,sum=0;
    printf("ENter a number:");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        r=n%i;
        if(r==0)
        {
            sum+=i;
        }
    }
    if(sum==n)
    printf("%d is a perfect number",n);
    else printf("%d is not a perfect number",n);
}