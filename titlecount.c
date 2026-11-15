#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main(){
    char title[100];
    int cnt=0;

    if(fgets(title,sizeof(title),stdin) == NULL) return 0;
    title[strcspn(title,"\n")] =  '\0';
    for(int i=0;title[i] != '\0';i++){
        if(!isspace(title[i])) cnt++;
    }
    printf("%d",cnt);
    return 0;
}
