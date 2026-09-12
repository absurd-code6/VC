#include<stdio.h>
#include<string.h>
struct facebook {
char username[50];
int friends;
float version;
};

int main() {
struct facebook fb={"Enovac Turner",500,17.12};
printf(" %s\n",fb.username);
printf(" %d\n",fb.friends);
printf(" %f\n",fb.version);

// Structures to pointers
struct facebook *ptr;
ptr=&fb;
printf("\nPrinting using pointers");
printf("\n %s",(*ptr).username);
printf("\n %d",(*ptr).friends);
printf("\nptr->version :- %f",ptr->version);  //(*ptr).code <---> ptr->code
return 0;

}