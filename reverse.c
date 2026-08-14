#include <stdio.h>

int main(){
    int x;
    int mask=1;
    int t;

    scanf("%d",&x);
    t=x;

    while (t>9) {
        t=t/10;
        mask*=10;
    }

    for (;x>0;) {
        int d=x/mask;
        printf("%d",d);
        x=x%mask;
        if (x>0) {
            printf(" ");
        }
        mask/=10;
    }
    printf("\n");
    return 0;
}
