#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input for n. Please enter a positive integer." << endl;
        return 1;
    }

    int number, sum = 0;
    cout << "Enter " << n << " numbers: ";

    for (int i = 0; i < n; ++i) {
        cin >> number;
        sum += number;
    }

    cout << "Sum: " << sum << endl;

    return 0;
}
	