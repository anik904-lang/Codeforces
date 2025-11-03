#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    vector<int> marks(n);   // Vector to store marks

    // Input marks
    cout << "Enter marks of each student:\n";
    for(int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    // Display marks
    cout << "Marks are: ";
    for(int i = 0; i < n; i++) {
        cout << marks[i] << " ";
    }

    // Find highest marks
    int highest = marks[0];
    for(int i = 1; i < n; i++) {
        if(marks[i] > highest) {
            highest = marks[i];
        }
    }

    cout << "\nHighest marks: " << highest;

    return 0;
}
