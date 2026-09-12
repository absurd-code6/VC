#include<stdio.h>
#include<string.h>
struct Liggio {
char name[100];
int years;
};
void criminalrecord(struct Liggio lig);
void main() {
struct Liggio lig={"Luciano Leggio",30};
criminalrecord(lig);
}

void criminalrecord(struct Liggio lig) {
    struct Liggio *ptr;
    ptr=&lig;
    printf("Name:%s\n",(*ptr).name);
    printf("Remained fugitive for:%d years",lig.years);
}
// typedef- used to create alias for datatypes

/*#include<stdio.h>
#include<string.h>
typedef struct Liggio {
char name[100];
int years;
} lg;
void main() {
lg lig={"Luciano Leggio",30}; //notice that struct liggio gets replaced by lg
printf("Fugitive for(using typedef with alias;lg) is %d",lig.years);
}*/


