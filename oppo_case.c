#include <stdio.h>
#include<string.h>
int main() {
char sentence[100];
printf("Type a sentence in any case:");
scanf("%s",sentence);
for(int i=0;sentence[i]!='\0';i++) {
    if(sentence[i]>='a' && sentence[i]<='z') {  // a-A=32,A(65) to Z(90) 
        sentence[i]=sentence[i]-32;
    } else if(sentence[i]>='A' && sentence[i]<='Z') { // a(97) to z(122)
        sentence[i]=sentence[i]+32;
    }
}
printf("The sentence in opposite case is  %s",sentence);
return 0;
}
