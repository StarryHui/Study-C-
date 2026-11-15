#include <stdio.h>
#include <string.h>

int main(){
    int n;
    char pw[51];

    scanf("%d",&n);
    getchar();
    fgets(pw,sizeof(pw),stdin);
    pw[strcspn(pw,"\n")] = '\0';

    for(int i=0;pw[i] != '\0';i++){
        pw[i]=(pw[i]-'a'+n)%26+'a';
    }
    printf("%s",pw);
    return 0;
}
