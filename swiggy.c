
// Write a program to check student passed/failed 
# include<stdio.h>
int main()
{
int mrks;
printf("enter marks");
scanf("%d",&mrks);
if (mrks>=30 && mrks<=100) 
{
    printf("Passed\n");
} 
else if (mrks>100) 
{
    printf("max marks is 100 you fool\n");
}
else
{
 printf("Failed\n");
}
return 0;
}