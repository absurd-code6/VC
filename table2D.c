// 2D array to store 2 & 3
# include<stdio.h>
void storetab(int arr[][10],int n,int m,int number);
void main()
{
int tab[2][10];
storetab(tab,0,10,2);
storetab(tab,1,10,3);

    for(int i=0;i<10;i++) {
        printf("%d\t",tab[0][i]);
    }
 /*printf("\t");
 printf("\n");*/
    for(int i=0;i<10;i++) {
        printf("%d\t",tab[1][i]);
    }
    
}

void storetab(int arr[][10],int n,int m,int number) {
    for(int i=0;i<m;i++)
    {
        arr[n][i]= number*(i+1);
    }
}