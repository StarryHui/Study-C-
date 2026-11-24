#include <stdio.h>
#include <stdlib.h>

void printfscore(int *cnt1,int *cnt2);
void eleven(char s[]);
void twenty_two(char s[]);

int main(){
    char s[65005];
    int len = 0;
    char ch;

    while((ch = getchar()) != EOF){
        if(ch != '\n' && ch != '\r' && ch != ' '){
            s[len++] = ch;
            if(ch == 'E') break;
        }
    }
    s[len] = '\0';

    eleven(s);
    printf("\n");
    twenty_two(s);

    return 0;
}

void eleven(char s[]){
    int cnt1=0,cnt2=0;
    int *p1=&cnt1,*p2=&cnt2;

    for(int i=0;s[i] != '\0'; i++){
        if(s[i] == 'W') cnt1++;
        else if(s[i] == 'L') cnt2++;
        else if(s[i] == 'E') {
            printfscore(p1,p2);
            break;
        }

        if ((cnt1 >= 11 || cnt2 >= 11) && abs(cnt1 - cnt2) >=2){
            printfscore(p1,p2);
        }
    }
}

void twenty_two(char s[]){
    int cnt1=0,cnt2=0;
    int *p1=&cnt1,*p2=&cnt2;

    for(int i=0;s[i] != '\0'; i++){
        if(s[i] == 'W') cnt1++;
        else if(s[i] == 'L') cnt2++;
        else if(s[i] == 'E') {
            printfscore(p1,p2);
            break;
        }

        if ((cnt1 >= 21 || cnt2 >= 21) && abs(cnt1 - cnt2) >=2){
            printfscore(p1,p2);
        }
    }
}

void printfscore(int *cnt1,int *cnt2){
    printf("%d:%d\n",*cnt1,*cnt2);
    *cnt1=0;
    *cnt2=0;
}
