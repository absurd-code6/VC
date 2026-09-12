#include<stdio.h>
#include<string.h>
struct cities {
char name[100];
char location[100];
int zipcode;
float rating;
};
int main() 
{
struct cities city[100];
city[0].zipcode=90010;
strcpy(city[0].location,"Los Angeles");
city[0].rating=4.5;
strcpy(city[0].name,"Santa Clarita");
printf("Name :- %s\n",city[0].name);
printf("location:- %s\n",city[0].location);
printf("zipcode is %d\n",city[0].zipcode);
printf("Rating :- %f\n",city[0].rating);
    return 0;
}