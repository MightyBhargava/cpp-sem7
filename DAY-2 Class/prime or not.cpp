#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Enter a number: ";
    int num;
    cin >> num;

    if (cin.fail()) {
        cout << "Invalid input. Please enter an integer number.\n";
        return 1;
    }

    if (num <= 1) {
        cout << num << " is not prime\n";
    } else {
        bool isPrime = true;
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << num << " is prime\n";
        } else {
            cout << num << " is not prime\n";
        }
    }

    return 0;
}
