#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", s);

    int a = 0, b = 0, c = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        if (s[i] == '1') a++;
        else if (s[i] == '2') b++;
        else if (s[i] == '3') c++;
    }

    int first = 1;
    for (int i = 0; i < a; i++) {
        if (!first) printf("+");
        printf("1");
        first = 0;
    }
    for (int i = 0; i < b; i++) {
        if (!first) printf("+");
        printf("2");
        first = 0;
    }
    for (int i = 0; i < c; i++) {
        if (!first) printf("+");
        printf("3");
        first = 0;
    }

    return 0;
}
