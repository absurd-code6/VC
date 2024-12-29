// Ask user to enter their full name and print it back 2 them
// scanf() can't input multiple string words
// Here, gets(), fgets() & puts() come into the the picture
#include<stdio.h>
void main() {
char full_name[100]; // 100 means 100 characters
printf("enter your  full name");
//gets(full_name);
fgets(full_name,100,stdin);
puts(full_name); // prints automatically in next line so no need of \n

}
// gets() is unsafe to use