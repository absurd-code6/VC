/* swap means to interchange
# call by reference pointer */
# include<stdio.h>
void swp(int *a, int *b);
int main() {
int x = 512; int y = 326;
    swp(&x,&y);
    printf("x = %d and y = %d\n",x,y);
    return 0;
}
void swp(int *a,int *b) {
    int tempor = *a;
    *a = *b;
    *b = tempor;
}