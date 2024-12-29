// Introduction to pointers//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\
# include <stdio.h>
int main()
{
  int age = 46;  
  int *ptr = &age;
  int newage = *ptr;
  printf("%d",newage); 
// address
printf("%p\n",&age);
printf("%u\n",&age); // %u stands for unsigned
printf("%u\n",ptr);
printf("%u\n",&ptr); // address of pointer(* means value at address and & means address of....)
printf("%d\t",age);
printf("%d\t",*ptr);
printf("%d\t",*(&age));
    return 0;
}