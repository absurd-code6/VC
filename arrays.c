/*Write program to enter price of 3 items and print 
final cost with gst*/
# include<stdio.h>
int main() {
float prices[3];
printf("price of the items :");
scanf("%f",&prices[0]);
scanf("%f",&prices[1]);
scanf("%f",&prices[2]);
printf("total cost I = %f\n",prices[0]+(0.18*prices[0]));
printf("total cost II = %f\n",prices[1]+(0.18*prices[1]));
return 0;
}