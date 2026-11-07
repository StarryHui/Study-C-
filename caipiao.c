#include <stdio.h>

int main (){
    int n;
    scanf("%d",&n);
    int buy[8];
    int win[8];
    for(int i=0;i<7;i++){
        scanf("%d",&win[i]);
    }
    int len=7;
    int sit[8]={0};

    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<len;j++){
            scanf("%d",&buy[j]);
        }
        for(int u=0;u<len;u++){
            for(int o=0;o<len;o++){
                if(buy[u] == win[o]) cnt++;
            }
        }
        sit[cnt]++;
    }

    for(int i=7;i>0;i--){
        printf("%d ",sit[i]);
    }
    return 0;
}
