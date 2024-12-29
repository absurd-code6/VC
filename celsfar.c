# include<stdio.h>
float celsfar(float celscius);
int main() {
float far = celsfar(329);
printf(" temperature in fahreinheit:%f",far);
    return 0;
}
float celsfar(float celsius) {

float far= celsius*(9.0/5.0) + 32;
return far;
}