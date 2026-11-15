#include <stdio.h>

int main(){
    int m,n;
    int cnt[10]={0};
    scanf("%d %d",&m,&n);

    for(int i=m;i<=n;i++){
        int temp=i;
        if(temp == 0){
            cnt[0]++;
        } else{
            while(temp>0){
                cnt[temp%10]++;
                temp/=10;
            }
        }
    }
    for(int i=0;i<10;i++){
        if(i==0) printf("%d",cnt[i]);
        else printf(" %d",cnt[i]);
    }
    return 0;
}
