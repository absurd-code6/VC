# include<stdio.h>
void sqr(int n);
void sqr1(int *n);
int main() {
int number= 8;
sqr(number);
printf("given number = %d\n",number);
sqr1(&number);
printf("given number = %d\n",number);
    return 0;
}
// call by value
void sqr(int n) {
    n = n * n;
    printf("square = %d\n",n);
}
void sqr1(int *n) {
    *n = (*n) * (*n);
    printf(" square = %d\n",*n); 
}