#include <stdio.h>
#include <string.h>
#define MAXN 505

int main(){
    char s1[MAXN],s2[MAXN];
    if(scanf("%504s %504s",s1,s2) != 2) return 0;

    int len1=(int)strlen(s1);
    int len2=(int)strlen(s2);

    int a[MAXN]={0};
    int b[MAXN]={0};
    int res[MAXN+2]={0};

    for(int i=0;i<len1;i++){
        a[i]=s1[len1-1-i]-'0';
    }

    for(int i=0;i<len2;i++){
        b[i]=s2[len2-1-i]-'0';
    }

    int max_len= len1>len2 ? len1 :len2;
    int carry=0;
    int k=0;

    for(int i=0;i<max_len;i++){
        int sum=a[i]+b[i]+carry;
        res[k++]=sum%10;
        carry=sum/10;
    }

    if(carry>0) res[k++]=carry;

    for(int i=k-1;i>=0;i--){
        putchar(res[i] + '0');
    }
    putchar('\n');
    return 0;
}
