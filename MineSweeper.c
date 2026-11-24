#include <stdio.h>

int main(){
    int n,m;
    if(scanf("%d %d",&n,&m) != 2) return 0;
    char c[m][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf(" %c",&c[j][i]);
        }
    }

    int dx[8]={-1,1,0,0,-1,-1,1,1};
    int dy[8]={0,0,-1,1,-1,1,-1,1};

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int cnt=0;
            if (c[j][i] == '*'){
                printf("*");
            }else{
                for(int u=0;u<8;u++){
                    int x=j+dx[u];
                    int y=i+dy[u];

                    if(x>=0 && x<=m-1 && y>=0 && y<= n-1 && c[x][y] == '*') cnt++;
            }
                c[j][i] ='0'+cnt;
                printf("%c",c[j][i]);
            }
        }
        printf("\n");
    }

    return 0;
}
