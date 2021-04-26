//Giai & bien luan ax^2 + bx + c = 0
#include<stdio.h>
#include<math.h> //using sqrt()

int main(){
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    if (a == 0){
        if (b == 0){
            if (c == 0) printf("Phuong trinh vo so nghiem"); else printf("Phuong trinh vo nghiem");
        } else {
            printf("%f", -c/b);
        }
        return 0;
    } else {
        float delta = b*b - 4*a*c;
        if (delta > 0){
            printf("%f %f", (-b+sqrt(delta))/(2*a), (-b-sqrt(delta))/(2*a));
            return 0;
        } else if (delta == 0){
            printf("%f", (-b)/(2*a));
            return 0;
        } else {
            printf("Phuong trinh vo nghiem");
        }
    }
}
