#include <iostream>

using namespace std;

int main() {
    cout << "Enter a number: ";
    int num;
    cin >> num;

    if (cin.fail()) {
        cout << "Invalid input. Please enter an integer number.\n";
    } else {
        if (num % 2 == 0) {
            cout << "The number is Even\n";
        } else {
            cout << "The number is Odd\n";
        }
    }

    return 0;
}
