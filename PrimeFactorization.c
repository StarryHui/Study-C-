#include <stdio.h>

int isPrime(int num){
    for(int i=2;i*i<=num;i++){
        if(num%i == 0) return 0;
    }
    return 1;
}

int main(){
    long long  n;
    scanf("%lld",&n);

    if(n == 1) printf("1");

    for(int i=2;i*i<n;i++){
        if(isPrime(i)){
            if(n%i == 0 && isPrime(n/i)){
                printf("%lld",n/i);
                continue;
            }
        }
    }
    return 0;
}
