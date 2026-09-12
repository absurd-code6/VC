# include<stdio.h>
#include<string.h>
void main() {
    int n,i,first,second;
  char str[100];
  printf("Enter a string:");
  fgets(str,sizeof(str),stdin);
  n=strlen(str);  // strlen() returns unsigned
    for(i=0;i<n/2;i++) {
        first=str[i];
        second=str[n-i-1];
        str[i]=second;
        str[n-i-1]=first;
    }

  for(i=0;i<n;i++) {
      printf("%c",str[i]);
  }
}
// OR Using a function where parameter is to be specified

/* # include<stdio.h>
void reverse(char str[],int n);
void main() {
  char str[100];
  printf("Enter a string:");
  fgets(str,sizeof(str),stdin);
reverse(str,12);
}
void reverse(char str[],int n) {
    int i,first,second;
        for(i=0;i<n/2;i++) {
        first=str[i];
        second=str[n-i-1];
        str[i]=second;
        str[n-i-1]=first;
    }
      for(i=0;i<n;i++) {
      printf("%c",str[i]);
  } 
} */

// OR Using 2 functions to calculate length of string and reverse it

/*#include <stdio.h>
int countlength(char str[]);
void reverse(char str[]);
void main() {
char str[100];
printf("Enter a string:");
fgets(str,sizeof(str),stdin);
countlength(str);
reverse(str);
}
int countlength(char str[]) {
    int count=0,n;
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }
    n=count-1;
    return n;
}
void reverse(char str[]) {
    int i,first,second,n;
    for(i=0;i<n/2;i++) {
        first=str[i];
        second=str[n-i-1];
        str[i]=second;
        str[n-i-1]=first;
    }
    for(i=0;i<n;i++) {
        printf("%c",str[i]);
    }
}*/