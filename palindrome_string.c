#include <stdio.h>
#include<stdbool.h>
#include<string.h>
bool check_palindrome(char str[],int left,int right);
void main() {
char str[100];
printf("Enter a string:");
scanf("%s",str);
int l=strlen(str);
if(check_palindrome(str,0,l-1))
{
    printf("Palindrome\n");
}
else
{
    printf("Not a Palindrome\n");
}
}
bool check_palindrome(char str[],int left,int right)
{
    if(left>=right)
    {
         return true;
    }
    if(str[left]!=str[right])
    {
      return false;
    }
    return check_palindrome(str,left+1,right-1);
}
