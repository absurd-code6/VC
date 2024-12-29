//separate  even and odd elements of array into 2 separate arrays
#include <stdio.h>
int main() {
    int a[100],b[100],c[100],i,n,j=0,k=0;
    printf("Enter size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
{
    if(a[i]%2==0) {
    b[j]=a[i];
    j++;
    }
    else {
    c[k]=a[i];
    k++;
}
}
    for(j=0;j<n;j++) 
    {
        printf("b[%d]:%d\t",j,b[j]);
    }
    for(k=0;k<n;k++)
    {
 printf("c[%d]:%d\t",k,c[k]);

    }

    return 0;
}