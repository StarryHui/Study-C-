#include <stdio.h>

int isPalindromes(int num);
int isPrime(int num);

int main(){
    int a,b;
    scanf("%d %d",&a,&b);

    if(a%2 == 0) a++;
    if(b > 9999999) b = 9999999;

    for(int i=a;i<=b;i+=2){
        if(isPalindromes(i)){
            if(isPrime(i)){
                printf("%d\n",i);
            }
        }
    }
    return 0;
}

int isPalindromes(int num){
    int temp = num;
    int rev = 0;

    while(num != 0){
        rev=rev*10+num%10;
        num/=10;
    }
    return rev == temp;
}

int isPrime(int num){
    for(int i=2;i*i<=num;i++){
        if(num%i == 0) return 0;
    }
    return 1;
}
