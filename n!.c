#include <stdio.h>

int main(){
    int num1=0;
    int num2=1;

    scanf("%d",&num1);
    for(;num1>1;num1--) {
        num2 *= num1;
    }
    printf("%d\n",num2);
    return 0;
}
