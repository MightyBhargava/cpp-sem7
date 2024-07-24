#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double taxableIncome, tax = 0;

    cout << "Enter your Income: ";
    cin >> taxableIncome;

    if (taxableIncome <= 60000) {
        tax = 0;
    } else if (taxableIncome > 60000 && taxableIncome <= 150000) {
        tax = taxableIncome * 0.05;
    } else if (taxableIncome > 150000 && taxableIncome <= 500000) {
        tax = taxableIncome * 0.1;
    } else {
        tax = taxableIncome * 0.15;
    }

    cout << fixed << setprecision(2);
    cout << "Your income tax is: " << tax << endl;

    return 0;
}
