// write a funcn to calc sum,average of 2 numbers
# include<stdio.h>
void marlboro(int a,int b,int *sum,int *prod,int *avg);
int main() {
int a = 2564; int b = 6546;
int sum,prod,avg;
marlboro(a,b,&sum,&prod,&avg);
printf(" sum = %d product = %d average = %d",sum,prod,avg);
    return 0;
}
void marlboro(int a,int b,int *sum,int *prod,int *avg) {
         *sum = a + b;
         *prod = a * b;
         *avg = (a + b)/2;
}