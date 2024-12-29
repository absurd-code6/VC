/* Krishnamurthy No: A no the sum of the factorial 
of whose digits is equal to itself(Eg. 145)*/
#include <stdio.h>
void main() {
    int n,r,f,num,sum=0,i;;
    printf("Enter a number:");
    scanf("%d",&n);
    num=n; // Important:Note this step
    while(n>0) {
        r=n%10;
        f=1; // declare f=1 here and not above
        for(i=r;i>=1;i--) {
        f*=i;
        }
        sum+=f;
        n/=10;
    }
    if(sum==num)  //Important:Note this step
    printf("Krishnamurthy Number");
    else
    printf("Not Krishnamurthy Number ");
}
