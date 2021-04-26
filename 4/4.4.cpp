//UCLN va BCNN;
//kiem tra du lieu dau vao??
#include<stdio.h>
#include<algorithm>

using namespace std;

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    int s = a * b;
    while (a * b != 0){
        //printf("%d %d\n", a, b);
        if (a > b) a %= b; else b %= a;
    }
    //printf("%d", s);
    printf("%d\n%d", max(a,b), s/max(a,b));
}
