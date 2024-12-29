// Calculating areas of square,circle,rectangle by funcns
# include<math.h> //<stdio.h>
float sqar(float s);
float circar(float r);
float rectar(float l,float b);
int main() {
float r= 42;
printf("area of circle  %f",circar(r));
return 0;
}
float sqar(float s) {
    return s*s;
}
float circar(float r) {
    return 3.14*pow(r,2); // 3.14*r*r;
}
float rectar(float l, float b) {
    return l*b;
}