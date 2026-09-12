#include<stdio.h>
#include<string.h>
int main()
{                  //strcmp compares 2 strings & retuns a value
   char c[]="Character";               // 0 -> string "="ual,+ve-> 1st str> 2nd str,-ve-> 1st<2nd
   char d[]="Character";
   char o[]="Pyridine";
   char p[]="Methyl Orange"; 
   printf("%d\n",strcmp(c,d));
   printf("%d\n",strcmp(o,p));
   printf("%d\n",strcmp(p,o));
    return 0;     // value returned = difference in ASCII value(eg B(66)-A(65)=1)
}