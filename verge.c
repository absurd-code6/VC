#include <stdio.h>

int main()
{
    char k;
    printf("character >");    
    scanf("%c",&k);
    if(k>='A' && k<='Z') {
        printf("UPPER");
    }
    else if(k>='a'&& k<='z') {
        printf("{lower");
    } else {
        printf("not English");
    }
    
    return 0;
}
