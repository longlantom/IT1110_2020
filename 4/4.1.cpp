//Tinh giai thua cua n (n!) voi n < 8
#include<stdio.h>

int main(){
    int n, s = 1;
    do{
        scanf("%d", &n);
    } while (n >= 8); //kiem tra du lieu dau vao
    for (int i = 2; i <= n; i++){
        s *= i;
    }
    printf("%d", s);
}
