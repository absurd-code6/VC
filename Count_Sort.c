#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int maximum(int arr[], int n){
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i]){
            max = arr[i];
        }
    }
    return max;
    
}
void countSort(int arr[], int n){
    int i, j;
    // Find the maximum element in A
    int max = maximum(arr, n); 

    // Create the count array
    int* count = (int *) malloc((max+1)*sizeof(int));

    // Initialize the array elements to 0
    for (i = 0; i < max+1; i++)
    {
        count[i] = 0; 
    }

    // Increment the corresponding index in the count array
    for (i = 0; i < n; i++)
    {
        count[arr[i]]+=1; 
    }

    i =0; // counter for count array
    j =0; // counter for given array A

    while(i<= max){
        if(count[i]>0){
            arr[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else{
            i++;
        }
    } 
}

int main(){
    int arr[100],n; 
printf("Enter the size of array:");
scanf("%d",&n);
printf("Enter %d numbers:\n",n);
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
    display(arr, n);
    countSort(arr, n);
printf("Performing Count Sort\n");
    display(arr, n); 
    return 0;
}
