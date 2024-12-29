# include<stdio.h>
int main() {
int fibonacci(int num);
printf("fibonacci sequence is  = %d",fibonacci(5));
//printf("%d",fibonacci(8));

    return 0;
}
int fibonacci(int num) {
   // if(num==0 || num==1) {
        if(num==1 || num==2) {
            return 1;
        }
int num1=fibonacci(num-1);
int num2=fibonacci(num-2);
int numN=num1+num2;
return numN;
}
// without recursion
/*// Online C compiler to run C program online
#include <stdio.h>
// using while loop
int main() {
int a=0,b=1,i=0;
int sum=0,n;
printf("Enter:");
scanf("%d",&n);
printf("Fibo seq of %d is:",n);
while(i<=n-2) {
     sum=a+b;
    a=b;
    b=sum;
    printf("%d\t",sum);
    i=i+1;
}
    return 0;
}
*/

/*// Online C compiler to run C program online
#include <stdio.h>
// using for loop
int main() {
int a=0,b=1,i;
int sum=0,n;
printf("Enter:");
scanf("%d",&n);
printf("Fibonacci of %d is:",n);
for(i=0;i<=n-2;i++) {
        sum=a+b;
    a=b;
    b=sum;
}
    printf("%d",sum); 
    return 0;
}*/