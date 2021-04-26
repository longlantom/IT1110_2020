//Chuan hoa xau
#include<stdio.h>
#include<string.h>

int main(){
    int n;
    char s[101][100], b[101][100];
    scanf("%d", &n);
    for (int j = 0; j < n; j++){
        fflush(stdin);
        gets(s[j]);
    }

    for (int j = 0; j < n; j++){
        int i = 0, l = strlen(s[j]) - 1;
        while (s[j][i] == ' '){
            i++;
        }
        while (s[j][l] == ' '){
            l--;
        }
        int d = 0;
        while (i <= l){
            while ((s[j][i] >= 'a' && s[j][i] <= 'z') || (s[j][i] >= 'A' && s[j][i] <= 'Z')){
                if (s[j][i] >= 'a' && s[j][i] <= 'z') s[j][i] -= 32;
                b[j][d] = s[j][i];
                d++;
                i++;
            }
            b[j][d] = ' ';
            d++;
            while (s[j][i] == ' ' && s[j][i+1] == ' ') i++;
            i++;
        }
        for (int i = 0; i < d-1; i++){
            printf("%c", b[j][i]);
        }
        printf(":%d\n", d-1);
    }
}
