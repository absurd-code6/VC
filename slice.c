/*Write a funcn named slice,which takes a string & 
return sliced string from index n to m*/
#include<stdio.h>
#include<string.h>
void slice(char word[],int n,int m);
void main()
{
char word[]="Bancho";
slice(word,3,6);
}
void slice(char word[],int n,int m)
{
    char sting[200];
    int j=0;
    for(int i=n;i<m;i++,j++)
    {
    sting[j]=word[i];
    }
    sting[j]='\0';
    puts(sting);
}