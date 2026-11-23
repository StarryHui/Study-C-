#include <stdio.h>

int isPrime(int num);

int main(){
    int n;
    scanf("%d",&n);

    for(int i=4;i<=n;i+=2){
        for(int j=2;j<i;j++){
            if(isPrime(j)){
                if(isPrime(i-j)){
                    printf("%d=%d+%d\n",i,j,i-j);
                    break;
                }
            }
        }
    }
    return 0;
}

int isPrime(int num){
    for(int i=2;i*i<=num;i++){
        if(num%i == 0) return 0;
    }
    return 1;
}
