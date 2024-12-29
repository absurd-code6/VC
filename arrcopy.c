#include<stdio.h>
int main() 
{
int a[100],b[100],i,s;
printf("Enter size of array a:");
scanf("%d",&s);
for(i=0;i<s;i++)
{
    printf("a[%d}:",i);
    scanf("%d",&a[i]);
}
for(i=0;i<s;i++)
{
    a[i]=b[i];
 printf("b[%d]:%d\t",i,b[i]);
}
    return 0;
} //code seems to be correct but not working