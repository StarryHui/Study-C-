#include <stdio.h>

int main(){
    double num=0;
    double sum=0;
    int count=0;
    scanf("%lf",&num);
    while(num!=0){
        count++;
        sum += num;
        printf("目前共计%lf，共有%d个数\n",sum,count);
        scanf("%lf",&num);
    }

    printf("以上的平均数为%f\n",sum/count);

    return 0;
}
