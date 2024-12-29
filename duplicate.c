#include <stdio.h>

int main() {
int arr[100]={1,2,3,4,3,5,3};
int n=7,i,j,dup=0;
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++)
    {
        if(arr[i]==arr[j]){
        dup++;
        break;
        }
    }
}
printf("No of duplicate elements is %d",dup);
    return 0;
}
/*#include <stdio.h>

int main() {
int arr[100];
int n,i,j,dup=0;
printf("Enter no of elements in the array >");
scanf("%d",&n);
printf("Enter the %d elements in the array >",n);
for(i=0;i<n;i++) {
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++)
    {
        if(arr[i]==arr[j]){
        dup++;
        break;
        }
    }
}
printf("No of duplicate elements:%d",dup);
    return 0;
}*/