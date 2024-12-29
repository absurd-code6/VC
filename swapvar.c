# include<stdio.h>
void main() {
    int a,b;
    printf("Enter 1st value:");
    scanf("%d",&a);
    printf("Enter 2nd value:");
    scanf("%d",&b);
    /*a=a+b;
    b=a-b;
    a=a-b;  OR */
    a=a-b;
    b=a+b;
    a=b-a;
    printf("%d,%d",a,b);
}