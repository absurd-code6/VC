   #  include<stdio.h>
  int fact(int n);
int main() {
 printf("factorial is : %d",fact(6));
     return 0;
      return 1;
}
      int fact(int n) {
     if(n==0) {  // Base Case
     return 1;  //  Never miss it.
     }
   int fact1=fact(n-1);
   int factN=fact1*n;
   return factN;
 }	
