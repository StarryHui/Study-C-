#include <stdio.h>

int peach(int num,int n);

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",peach(1,n));
    return 0;
}

int peach(int day,int n){
    if(day == n){
        return 1;
    }
    return (peach(day+1,n) + 1)*2;
}
