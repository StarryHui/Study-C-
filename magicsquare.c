#include <stdio.h>

int first(int num);
int n;
int square[45][45];

int main(){
    scanf("%d",&n);
    square[0][(n-1)/2]=1;

    for(int k=2;k<=n*n;k++){
        first(k-1);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",square[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int first(int num){
    for(int i=0;i<n;i++){
        if(square[0][i] == num) {
            if(i != n-1){
            square[n-1][i+1] = num+1;
            return 1;
            }
            else{
                square[1][n-1] = num+1;
                return 1;
            }
        }
            for(int j=1;j<n;j++){
                if(i == n-1) {
                if(square[j][i] == num){
                square[j-1][0] = num+1;
                return 1;
                }
                }else if(i != n-1){
                    if(square[j-1][i+1] == 0) {
                        square[j-1][i+1] = num+1;
                        return 1;
                }   else {
                    square[j+1][i] = num+1;
                    return 1;
            }
        }
    }
    }
    return 0;
}
