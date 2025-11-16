#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int maxPos = 0, minPos = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > a[maxPos]) maxPos = i;
        if (a[i] <= a[minPos]) minPos = i;
    }

    int ans = maxPos + (n - 1 - minPos);
    if (minPos < maxPos) ans--;

    printf("%d", ans);
    return 0;
}
