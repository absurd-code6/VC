/*Write a funcn to count occurence of vowels in string*/
#include<stdio.h>
#include<string.h>
void vowel(char arr[]);
void main()
{
char maltego[900]="AeIoUiaOu";
vowel(maltego);
}
void vowel(char arr[])
{
   int f=0;
for(int i=0;arr[i]!='\0';i++)
{
if(arr[i]== 'A' || arr[i]== 'E' || arr[i]== 'I' || arr[i]=='O' || arr[i]== 'U' 
|| arr[i]=='a' || arr[i]== 'e' || arr[i]=='i' || arr[i]== 'o' || arr[i]== 'u')
{
    f++;
}
}
printf("Count of vowels is %d",f);
}
