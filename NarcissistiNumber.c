#include <stdio.h>

int main(){
    int n;
    int num = 1;
    int i ;
    out:
    scanf("%d",&n);

    if (n>=3 && n<=7) {
        for (i = 1 ; i < n ; i++){
            num *= 10;
        }
        i = num;
        while (i<num*10) {
            int t = i;
            int sum=0;

            while (t>0) {
            int d = t % 10;
            int y = d;

            for (int x = 1; x < n ; x++) {
                y *= d;
            }
            sum += y;
            t /= 10;
            }
            if (sum == i) {
                printf("%d\n",i);
                }
             i++;
        }
    }
    else {
        printf("请输入有效的数字\n");
        goto out;
    }

    return 0;
}
