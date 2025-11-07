#include <stdio.h>
#include <ctype.h>

int main() {
    int n;
    char s[1001]; // assuming max length 1000
    int letters[26] = {0};
    
    scanf("%d", &n);
    scanf("%s", s);
    
    for (int i = 0; s[i] != '\0'; i++) {
        if (isalpha(s[i])) {
            letters[tolower(s[i]) - 'a'] = 1;
        }
    }
    
    int count = 0;
    for (int i = 0; i < 26; i++) {
        count += letters[i];
    }
    
    if (count == 26)
        printf("YES");
    else
        printf("NO");
    
    return 0;
}
