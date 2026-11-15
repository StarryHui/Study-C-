#include <stdio.h>

int isprime(int num);

int main(){
    int maxn=0,minn=0;
    char word[101];

    if(fgets(word,sizeof(word),stdin) == NULL) return 0;
    for(int i=0;word[i] != '\0';i++){
        
    }
    return 0;
}

int isprime(int num){
    if(i==1 || i==0) return 0;
    for(int i=2;i<101;i++){
        if(num%i == 0) return 0;
    }
    return 1;
}