#include <stdio.h>

const char font[10][5][4] = {
    {"XXX", "X.X", "X.X", "X.X", "XXX"}, // 0
    {"..X", "..X", "..X", "..X", "..X"}, // 1
    {"XXX", "..X", "XXX", "X..", "XXX"}, // 2
    {"XXX", "..X", "XXX", "..X", "XXX"}, // 3
    {"X.X", "X.X", "XXX", "..X", "..X"}, // 4
    {"XXX", "X..", "XXX", "..X", "XXX"}, // 5
    {"XXX", "X..", "XXX", "X.X", "XXX"}, // 6
    {"XXX", "..X", "..X", "..X", "..X"}, // 7
    {"XXX", "X.X", "XXX", "X.X", "XXX"}, // 8
    {"XXX", "X.X", "XXX", "..X", "XXX"}  // 9
};

int main(){
    int n;
    if (scanf("%d", &n) != 1) return 0;
    char s[105];
    scanf("%s",s);

    for(int r=0;r<5;r++){
        for(int i=0;i<n;i++){
            if(i>0) putchar('.');
            int digit = s[i]-'0';
            printf("%s",font[digit][r]);
        }
         printf("\n");
    }
    return 0;
}