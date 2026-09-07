#include <stdio.h>

int airi(int x, int y);

int main(){
    airi(1, 11);
    airi(2, 22);
    airi(3, 33);

    int airi (int a ,int b){
        int sum = 0;
        
        sum+=a;
        sum+=b;    
            
        printf("a+b=%d",&sum)
    }     
    return 0;
}