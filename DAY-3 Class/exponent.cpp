#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double base;
    int exponent;
    cout << "Input the base: ";
    cin >> base;
    cout << "Input the exponent: ";
    cin >> exponent;
    double result = pow(base, exponent);
    cout << "Result: " << result << endl;
    return 0;
}
