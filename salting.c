/*Find the salted password entered by user if salt is 'f***' 7 added at the end*/
#include<stdio.h>
#include<string.h>
void salting(char pass[]);
void main()
{
char pass[100];
printf("enter your paasword:");
scanf("%s",pass);
salting(pass);
}
void salting(char pass[])
{
char salt[]="f***";
char word[200];
strcpy(word,pass);
strcat(word,salt);
puts(word);
}