/*Create a struct to store 2vectors.Make funcn to return sum of 2vrs*/
#include<stdio.h>
struct vector{
int x;
int y;
};
void vectorsum(struct vector v1,struct vector v2);
void main() {
struct vector v1={2,4};
struct vector v2={5,6};
vectorsum(v1,v2);
}
void vectorsum(struct vector v1,struct vector v2)
{
    printf("Sum of 2 vectors:[%d,%d]",v1.x+v2.x,v1.y+v2.y);
}