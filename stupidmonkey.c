#include <stdio.h>

int isprime(int num);

int main(){
    char word[101];
    int cnt[26]={0};

    if(fgets(word,sizeof(word),stdin) == NULL) return 0;
    for(int i=0;word[i] != '\0';i++){
        for(int j=0;j<26;j++){
            if(word[i] == 'a'+j) cnt[j]++;
        }
    }

    int maxn=0;
    int minn=0;

    for(int i=1;i<26;i++){
        if(cnt[i] != 0 && maxn == 0) maxn=cnt[i];
        if(cnt[i] != 0 && minn == 0) minn=cnt[i];
        if(maxn != 0){
             if(maxn < cnt[i]) maxn=cnt[i];
        }
        if(minn != 0){
            if(minn > cnt[i] && cnt[i] != 0) minn=cnt[i];
        }
    }

    int lucky=maxn-minn;
    if(isprime(lucky)){
        printf("Lucky Word\n%d",lucky);
    }
    else{
        printf("No Answer\n0");
    }
    return 0;
}

int isprime(int num){
    if(num<2) return 0;
    for(int i=2;i*i<num;i++){
        if(num%i == 0) return 0;
    }
    return 1;
}
