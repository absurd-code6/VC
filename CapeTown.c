// Introduction to Format Specifiers
# include<stdio.h>
int main() {
    int luv=143;
    float e=2.718281828459045;
/*This is not python,this is C so characters/strings are written
 in '' and not in ""*/
    char author ='Tite Kubo';
/*Format Specifiers specify the format in which output is obtained
%d for integers; %f for real numbers and %c for characters(eg. book )*/
    printf("I love you numeric code is %d \n",luv);
    printf("Value of e is %f \n",e);
    printf("author of bleach is %c ",author);
    return 0;
}
