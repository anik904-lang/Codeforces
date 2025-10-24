#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
     cin >> a[i];
    sort(a, a + n, greater<int>());
    int total = 0;
    for(int i = 0; i < n; i++) total += a[i];
    int my_sum = 0;
    for(int i = 0; i < n; i++) {
        my_sum += a[i];
        if(my_sum > total - my_sum) {
            cout << i + 1;
            break;
        }
    }
    return 0;
}
