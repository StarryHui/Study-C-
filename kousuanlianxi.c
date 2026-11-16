#include <stdio.h>
#include <string.h>

int main(){
    int n;
    if(scanf("%d",&n) != 1) return 0;

    char op='0';
    char s[20];
    char expr[100];

    for(int i=0;i<n;i++){
        scanf("%s",s);

        int x,y;
        if(s[0] == 'a' || s[0] == 'b' || s[0] == 'c'){
            op=s[0];
            scanf("%d %d",&x,&y);
        }else{
            sscanf(s,"%d",&x);
            scanf("%d",&y);
        }

        int ans=0;
        char sign='0';

        if(op == 'a'){
            ans=x+y;
            sign='+';
        }else if(op == 'b'){
            ans=x-y;
            sign='-';
        }else if(op == 'c'){
            ans=x*y;
            sign='*';
        }

        sprintf(expr,"%d%c%d=%d",x,sign,y,ans);
        printf("%s\n",expr);
        printf("%d\n",(int)strlen(expr));
    }
    return 0;
}
