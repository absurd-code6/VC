/*Check if a character is +nt in a string or not*/
#include<stdio.h>
#include<string.h>
void check(char str[],char ch);
void main()
{
    int w=0;
char limbo[100]="Baker Street";
char ch='S';
check(limbo,ch);
}
void check(char str[], char ch)
{
int i;
for(i=0;str[i]!='\0';i++)
{
if(str[i]==ch) 
printf("Present");
return;
}
printf("Absent");
}
// OR using if-else statements

/*#include<stdio.h>
void check(char str[],char ch);
void main()
{
char limbo[100]="Baker Street";
char ch='S';
check(limbo,ch);
}
void check(char str[], char ch)
{
int i,w=0;
for(i=0;str[i]!='\0';i++)
{
if(str[i]==ch) { 
w++;
break;
//return;
}
}
if(w!=0)
printf("Present");

else {
printf("Absent");
}
}*/