#include<stdio.h>
void nominal(char arr[]);
void main() {
char name[] = "Friedrich";
char title[] = "Nietzsche";
nominal(name);
nominal(title);
}
void nominal(char arr[]) 
{
for(int i=0;arr[i]!='\0';i++) {
printf("%c",arr[i]);
}
printf("\n");
}