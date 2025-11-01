#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a;
    cin >> a; 

    int min = a, max = a, count = 0;

    for(int i = 1; i < n; i++) {
        cin >> a;
        if(a > max) {
            count++;
            max = a;
        } 
        else if(a < min) {
            count++;
            min = a;
        }
    }
    cout << count;
    return 0;
}
