// Enter address 0f 3 people as (house no,block,city,state)
#include<stdio.h>
#include<string.h>
typedef struct address{
int houseno;
int block;
char city[50];
char state[50];
}addr;
void printaddress(struct address ad);
void main() {
addr ad[100];
printf("Enter details of 1st person");
scanf("%d",&ad[0].houseno);
scanf("%d",&ad[0].block);
scanf("%s",ad[0].city);
scanf("%s",ad[0].state);

printf("Enter details of 2nd person");
scanf("%d",&ad[1].houseno);
scanf("%d",&ad[1].block);
scanf("%s",ad[1].city);
scanf("%s",ad[1].state);

printf("Enter details of 3rd person");
scanf("%d",&ad[2].houseno);
scanf("%d",&ad[2].block);
scanf("%s",ad[2].city);
scanf("%s",ad[2].state);
printaddress(ad[0]);
printaddress(ad[1]);
printaddress(ad[2]);
}
void printaddress(struct address ad) {
    printf("address is:%d,%d,%s,%s\n",ad.houseno,ad.block,ad.city,ad.state);
}