//TBC so am, tong so duong
#include<stdio.h>

int main(){
    int n, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int sa = 0, sd = 0, da = 0;
    for (int i = 0; i < n; i++){
        if (a[i] < 0){
            sa += a[i];
            da++;
        }
        if (a[i] > 0){
            sd += a[i];
        }
    }
    printf("%f %d", (float)(sa)/da, sd);
}
