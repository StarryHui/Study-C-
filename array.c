#include<stdio.h>

int main(){
    int x;
    double sum = 0;
    int cnt = 0;
    int number[100];

    scanf("%d",&x);

    while(x!=-1){
        number[cnt]=x;
        sum+=x;
        cnt++;
        scanf("%d",&x);
    }

    printf("cnt=%d\n",cnt);

    if(cnt>0){
        int i;
        double avg = sum/cnt;
        printf("avg = %lf\n",avg);
        for(i = 0;i < cnt;i++){
            if(number[i]>avg){
                printf("%d\n",number[i]);
            }
            printf("i=%d\n",i);
        }
    }
    return 0;
}
