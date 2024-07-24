#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the position of the Fibonacci number you want to find: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else if (n == 1) {
        cout << "The Fibonacci number at position 1 is 0." << endl;
    } else if (n == 2) {
        cout << "The Fibonacci number at position 2 is 1." << endl;
    } else {
        int a = 0, b = 1, fib;
        for (int i = 3; i <= n; ++i) {
            fib = a + b;
            a = b;
            b = fib;
        }
        cout << "The Fibonacci number at position " << n << " is " << fib << "." << endl;
    }

    return 0;
}

