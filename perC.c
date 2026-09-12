//Write a program to take astring input from user using %c//
#include<stdio.h>
void main()
{
char linux[1000];
char  chr;
int i=0;
printf("Enter your string:");
while(chr!='\n')
{
scanf("%c",&chr);
linux[i]=chr;
i++;
}
linux[i]='\0';
puts(linux);
}