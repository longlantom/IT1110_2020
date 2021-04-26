//Tinh tong cac chu so
#include<stdio.h>

int main(){
    int n, s = 0;
    do{
        scanf("%d", &n);
    } while (n >= 1000); //kiem tra du lieu dau vao
    while (n != 0){
        s += (n % 10);
        n /= 10;
    }
    printf("%d", s);
}
