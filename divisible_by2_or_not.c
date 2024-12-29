// Write a program to find out a number is divisible by 2 or not
// Or even or odd
# include<stdio.h>
int main() {
    int n;
    printf("""enter the number> """);
    scanf("%d",&n);
    printf("%d \n",(n%2==0) && (n%2!=1));
    return 0;
}
