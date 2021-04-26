//Tinh A = X^2 + Y^2; B = (X + Y)^2; C = (X - Y)^2
#include<stdio.h>

int main(){
    float x, y;
    scanf("%f%f", &x, &y);
    printf("%f\n%f\n%f", x*x + y*y, (x+y)*(x+y), (x-y)*(x-y));
}
