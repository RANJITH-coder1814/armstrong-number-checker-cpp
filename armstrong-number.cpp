#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, original, remainder, result = 0, n = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    // Count number of digits
    while (original != 0) {
        original /= 10;
        ++n;
    }

    original = num;

    // Calculate Armstrong sum
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong Number." << endl;
    else
        cout << num << " is not an Armstrong Number." << endl;

    return 0;
}
