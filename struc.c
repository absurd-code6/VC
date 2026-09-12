/*Structures- A collection of different datatypes.
It itself is a user defined datatype*/
#include<stdio.h>
#include<string.h>
    struct product {   // user defined
char name[50];
int price;
float offer;
    };     // do not forget to give the statement terminator ; 

void main()
{
    struct product pr;
    strcpy(pr.name,"Reynolds Trimax");            //pr.name="Reynolds Trimax"; 
                                                //wrong as we cannot change
    pr.price=50;          //value ofstring declared in array format 
    pr.offer=0.6;        //using equal to sign
printf("product name is %s\n",pr.name);
    printf("product price is %d\n",pr.price);
printf("dicount offer is 60 percent i.e %f\n",pr.offer);
}

// Creating a structure for 2 products

/*#include<stdio.h>
#include<string.h>
struct products{
    char name[100];
    int price;
    float offer;
    };
    void main()
    {
        struct products pr1;
        strcpy(pr1.name,"Titan eyewear");
        pr1.price=400;
        pr1.offer=0.2;
        printf("product name is %s\n",pr1.name);
    printf("product price is %d\n",pr1.price);
printf("dicount offer is 20 percent i.e %f\n",pr1.offer);
struct products pr2;
strcpy(pr2.name,"Mercedes");
pr2.price=900000000;
pr2.offer=0.1;
printf("product name is %s\n",pr2.name);
    printf("product price is %d\n",pr2.price);
printf("dicount offer is 10 percent i.e %f\n",pr2.offer);
}*/