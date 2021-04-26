//Chuan hoa xau
#include<stdio.h>
#include<string.h>

int main(){
    char s[100], b[100];
    fflush(stdin);
    gets(s);

    int i = 0, l = strlen(s) - 1;
    while (s[i] == ' '){
        i++;
    }
    while (s[l] == ' '){
        l--;
    }
    int d = 0;
    while (i <= l){
        while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
            if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
            b[d] = s[i];
            d++;
            i++;
        }
        b[d] = ' ';
        d++;
        while (s[i] == ' ' && s[i+1] == ' ') i++;
        i++;
    }
    for (int i = 0; i < d-1; i++){
        printf("%c", b[i]);
    }
    printf(":%d", d-1);
}
