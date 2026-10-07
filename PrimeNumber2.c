#include <stdio.h>

int main (){
    int maxnumber;
    int x;
    int i;
    
    scanf("%d",&maxnumber);
    int isPrime[maxnumber];

    for(i = 0;i < maxnumber;i++){
        isPrime[i] = 1;
    }

    for(x = 2;x < maxnumber;x++){
        if(isPrime[x] == 1){
            for(i = 2;i*x < maxnumber;i++){
                isPrime[i*x] = 0;
            }
        }
    }

    for(i = 2;i < maxnumber;i++){
        if(isPrime[i] == 1){
            printf("%d\t",i);
        }
    }

    printf("\n");
    return 0;
}