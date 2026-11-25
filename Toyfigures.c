#include <stdio.h>

void left(int *loc,int *direct1,int step);
void right(int *loc,int *direct1,int step);
int n,m;

int main(){
    if(scanf("%d %d",&n,&m) != 2) return 0;
    char figure[n+1][11];
    int direct1[n+1];
    int direct2;
    int step;
    int loc=1;
    int *p1=&loc,*pd1=direct1;

    for(int i=1;i<=n;i++){
        scanf("%d %s",&direct1[i],figure[i]);
    }

    for(int i=0;i<m;i++){
        scanf("%d %d",&direct2,&step);
        if(direct2 == 0) left(p1,pd1,step);
        else if(direct2 == 1) right(p1,pd1,step);
    }

    printf("%s",figure[loc]);
    return 0;
}

void left(int *loc,int direct1[],int step){
    if(direct1[*loc] == 0) *loc=(*loc- step%n + n - 1)%n + 1;
    else if(direct1[*loc] == 1) *loc=(*loc+ step - 1)%n + 1;
}

void right(int *loc,int direct1[],int step){
    if(direct1[*loc] == 0) *loc=(*loc + step - 1)%n + 1;
    else if(direct1[*loc] == 1) *loc=(*loc - step%n + n - 1)%n + 1;
}
