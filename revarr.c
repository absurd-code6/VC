// Function for reversing an array
#include<stdio.h>
void reversi(int arr[],int n);
void printArr(int arr[],int n);
int main() {
int arr[]={1,2,3,4,5,6};
reversi(arr,6);
printArr(arr,6);
return 0;
}

void reversi(int arr[],int n) {
    int count=0;
    for(int i=0;i<n/2;i++) {
       int ist=arr[i];
       int snd=arr[n-i-1];
       arr[i]=snd;
       arr[n-i-1]=ist;
    }

}
void printArr(int arr[],int n) {
    for(int i=0;i<n;i++) {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
