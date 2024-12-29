#include<stdio.h>

void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void selectionSort(int *A, int n){
    int indexOfMin, temp;
    printf("Running Selection sort...\n");
    for (int i = 0; i < n-1; i++)
    {
        indexOfMin = i;
        for (int j = i+1; j < n; j++)
        {
            if(A[j] < A[indexOfMin]){
                indexOfMin = j;
            }
        }
        // Swap A[i] and A[indexOfMin]
        temp = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;
    }
}

int main(){


    //int arr[] = {3, 5, 2, 13, 12};
    //int n = 5;
    int arr[100],n;
printf("Enter the size of array:");
scanf("%d",&n);
printf("Eter %d numbers:",n);
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("Before Selection Sort\n");
    printArray(arr, n);
    selectionSort(arr, n);
printf("After Selection  Sort\n");
    printArray(arr, n);

    return 0;
}
