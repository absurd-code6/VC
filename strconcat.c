#include<stdio.h>
#include<string.h> // have a look at all the string funcns on internet//

int main()  /*use of funcn strcat(1st string,2nd string) 
              {concatenates 1st string with 2nd string}*/
{
char x[100]="Pom Pom";
char y[]=" Choda"; // no need to give size as strcat put it in x(100 bytes)
                          /* a space(" Choda") is given bcoz strcat does not give space 
                          so has to be given by user*/
strcat(x,y);
puts(x);
    return 0;
}