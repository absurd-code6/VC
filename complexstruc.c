/*Create a struct to store complex numbers(use arrow operator)*/
#include<stdio.h>
struct complex{
int real;
int imaginary;
};

int main() 
{
struct complex cn={5,4};
struct complex *ptr=&cn;
printf("IMAGinary part:%d",ptr->imaginary);
    return 0;
}