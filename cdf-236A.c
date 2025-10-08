#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    scanf("%s", s);
    int count = 0;
    for(char c = 'a'; c <= 'z'; c++) {
        int found = 0;
        for(int i = 0; i < strlen(s); i++) {
            if(s[i] == c) {
                found = 1;
                break;
            }
        }
        if(found) count++;
    }
    if(count % 2 == 0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");

    return 0;
}
