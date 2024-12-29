// Introduction To Multi-Dimensional Arrays
/*#include<stdio.h>
void main() {
//2 x 3
int data[2][3];
data[0][0]=314;
data[0][1]=271828;
data[0][2]=1729;

data[1][0]=153;
data[1][1]=459045;
data[1][2]=169;

printf("%d",data[1][1]);

}*/
//2D array/Matrix Operations
#include<stdio.h>
void main() {
int row,col;
printf("Total no of rows:");
scanf("%d",&row);
printf("Total no of columns :");
scanf("%d",&col);
int arr[row][col];
for(int i=0;i<row;i++) {
    for(int j=0;j<col;j++)
    {
        printf("arr[%d][%d]=",i,j);
        scanf("%d",&arr[i][j]);
    }
}
printf("\n");
for(int i=0;i<row;i++) {
    for(int j=0;j<col;j++)
    {
        printf("%d",arr[i][j]);
    }
printf("\n");
}
int ar[row][col];
for(int i=0;i<row;i++) {
    for(int j=0;j<col;j++)
    {
        printf("arr[%d][%d]=",i,j);
        scanf("%d",&ar[i][j]);
    }
}
printf("\n");
for(int i=0;i<row;i++) {
    for(int j=0;j<col;j++)
    {
        printf("%d",ar[i][j]);
    }
printf("\n");
}
int array[row][col];
for(int i=0;i<row;i++) {
    printf("\n");
    for(int j=0;j<col;j++)
    {
        array[i][j]=arr[i][j]%ar[i][j]; // +,-,*,/
        printf("%d",array[i][j]);
    }
}
}
