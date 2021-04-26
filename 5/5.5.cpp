//Chuan hoa xau3
#include<stdio.h>
#include<string.h>
#include<algorithm>

using namespace std;

bool sosanh(char x[100], int dx, char y[100], int dy){ //so sanh xau x do dai dx, y do dai dy
    for (int i = 0; i < min(dx, dy); i++){
        if (x[i] > y[i]) return true;
    }
    return false;
}

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
        while (s[j][i] == ' '){//xoa dau cach thua o dau xau
            i++;
        }
        while (s[j][l] == ' '){//xoa dau cach thua o cuoi xau
            l--;
        }
        int d = 0;
        while (i <= l){
            while ((s[j][i] >= 'a' && s[j][i] <= 'z') || (s[j][i] >= 'A' && s[j][i] <= 'Z')){
                if (s[j][i] >= 'A' && s[j][i] <= 'Z') s[j][i] += 32;
                b[j][d] = s[j][i];
                d++;
                i++;
            }
            b[j][d] = ' ';
            d++;
            while (s[j][i] == ' ' && s[j][i+1] == ' ') i++;
            i++;
        }
    }

    int d[101];
    for (int i = 0; i < n; i++){
        d[i] = strlen(b[i])-1;
    }

    //sap xep
    for (int i = 1; i < n; i++){
        for (int j = 0; j < i; j++){
            if (!sosanh(b[i], d[i], b[j], d[j])){
                char tg[101];
                int t = d[i];
                for (int z = 0; z < d[i]; z++){
                    tg[z] = b[i][z];
                }

                d[i] = d[j];
                for (int z = 0; z < d[i]; z++){
                    b[i][z] = b[j][z];
                }

                d[j] = t;
                for (int z = 0; z < d[j]; z++){
                    b[j][z] = tg[z];
                }
            }
        }
    }

    for (int i = 0; i < n; i++){
        printf("(%d)", i+1);
        for (int j = 0; j < d[i]; j++){
            if (j == 0 || b[i][j-1] == ' ') b[i][j] -= 32;
            printf("%c", b[i][j]);
        }
        printf("\n");
    }
}
