// Calculating Simple Interest
# include<stdio.h>
int main() {
    int p;
    int r;
    int t;
    printf("Principal");
     scanf("%d",&p);
    printf("Rate of interest");
     scanf("%d",&r);
    printf("Time");
    scanf("%d",t);
    float s=p*r*t;
    int i=s/100;
    printf("SI is %f",i);
    return 0;
}
