#include <stdio.h>

int main(){
    int x,n=0;
    long long sum=0;

    while(scanf("%d",&x) != EOF){
        sum+=x;
        n++;
    }

    if(n == 0){
        printf("0\n");
    }else{
        long long ans=sum*(1LL << (n-1));
        printf("%lld\n",ans);
    }
    return 0;
}
