# include<stdio.h>
//declaration
void reversi();
void reversi2();
int main()
{
printf("enter 1 or 0 >  ");
int n;
scanf("%d",&n);
if(n==1) {
    // calling the function
    reversi();
} else if(n==0) {
    reversi2();
}
else
printf("Wrong value entered");
    return 0;
}
// definition
void reversi() {
    printf("%d\n",1>2 && 8==9);
}
void reversi2() {
    printf("%d\n",2>1 || 1 >2);
}
