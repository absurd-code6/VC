//Write a funcn to count no of odd numbers in an array
#include<stdio.h>
int counto(int arr[],int n);
int main() {
int arr[]={1,2,3,4,5,6,7,8,9};
printf("%d\n",counto(arr,9));
printf("%d\n",*(arr+2)); // (0+2)th elelment
printf("%d\n",*(arr+8)); // element doesn't exist so it'll give error
return 0;
}

int counto(int arr[],int n) {
    int count=0;
    for(int i=0;i<n;i++) {
        if(arr[i]%2 != 0)
        count++;
    }
    return count;
}