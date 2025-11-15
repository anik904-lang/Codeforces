#include <stdio.h>

int main() {
    char s[1000];
    int freq[26] = {0};
    int count = 0;

    scanf("%[^\n]", s);  

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            int idx = s[i] - 'a';
            if (freq[idx] == 0) {
                freq[idx] = 1;
                count++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}
