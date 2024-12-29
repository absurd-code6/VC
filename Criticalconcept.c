# include<stdio.h>
int main() {
int y=2;
if (y=1) {
    printf("y is equal to 1 \n");
} else {
    printf("y is not equal to 1 \n");
}
/* will it give error =1 or !=1?- =1 since it replaces 2 by 1 
bcoz == is not used*/
int w=2;
if(w=0) {
    printf("w equal to 1 \n");
} else {
    printf("w not equal to 1 \n");
}
/* not equal to 1 is printed for using zero(false)
 instead of 1(true)*/
return 0;
}