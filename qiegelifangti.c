#include <stdio.h>

int cube[25][25][25];

int main(){
    int w,x,h;
    scanf("%d %d %d",&w,&x,&h);
    int q;
    scanf("%d",&q);
    int sum=0;

    for(int i=0;i<q;i++){
        int x1,y1,z1,x2,y2,z2;
        scanf("%d %d %d %d %d %d",&x1,&y1,&z1,&x2,&y2,&z2);

        for(int a=x1;a<=x2;a++){
            for(int b=y1;b<=y2;b++){
             for(int c=z1;c<=z2;c++){
                  cube[a][b][c] = 1;
             }
            }
        }
    }

    for(int a=1;a<=w;a++){
        for(int b=1;b<=x;b++){
            for(int c=1;c<=h;c++){
                if(cube[a][b][c] == 0) sum++;
            }
        }
    }
    printf("%d\n", sum);
    return 0;
}
