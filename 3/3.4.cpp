//Tinh tong diem va diem trung binh

#include<stdio.h>

int main(){
    float t, l, h;
    scanf("%f%f%f", &t, &l, &h);
    printf("%.2f\n%.2f", t+l+h, (t+l+h)/3);
}
