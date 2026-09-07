#include <stdio.h>

int airi(int x, int y);

int main(){
    airi(1, 11);
    airi(2, 22);
    airi(3, 33);

    return 0;
}

int airi (int a ,int b){
    int sum = 0;

    sum+=a;
    sum+=b;

    printf("a+b=%d\n",sum);

    return 0;
}
