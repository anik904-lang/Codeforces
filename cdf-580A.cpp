#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long prev, curr;
    cin >> prev;

    int cnt = 1, mx = 1;

    for(int i = 1; i < n; i++) {
        cin >> curr;
        if(curr >= prev)
            cnt++;
        else
            cnt = 1;

        if(cnt > mx)
            mx = cnt;

        prev = curr;
    }

    cout << mx;
    return 0;
}
