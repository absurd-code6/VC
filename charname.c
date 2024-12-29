// To input user's name & print its length
#include<stdio.h>
int length(char arr[]);
void main() {
    char username[100];
    printf("enter name");
    fgets(username,100,stdin);
printf("%d",length(username));
}

int length(char arr[]) {
    int count=0;
    for(int i=0;arr[i]!='\0';i++) {
        count++;
    }
    return count-2;
}
