#include <stdio.h>
#include <ctype.h>

int main(){
    char ch[101];

    fgets(ch,sizeof(ch),stdin);
    for(int i=0;ch[i] != '\0';i++){
        if(islower(ch[i])) ch[i]=toupper(ch[i]);
    }
    printf("%s",ch);
    return 0;
}
