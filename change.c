#include <stdio.h>

int main(){
    int price=0;
    int bill=100;

    scanf("%d",&price);
    if(price>100){
        printf("应找您%d元",price-bill);
    }
    else {
    printf("您还需要补%d元",bill-price);
    }

    return 0;
}
