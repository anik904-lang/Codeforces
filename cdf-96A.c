#include<stdio.h>
int main(){
    char s[101];
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==s[i+1] && s[i]==s[i+2] && s[i]==s[i+3] && s[i]==s[i+4] && s[i]==s[i+5] && s[i]==s[i+6]){
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
    

}