#include <iostream>

using namespace std;

double calculateSimpleInterest(double principal, int years, bool isSeniorCitizen) {
    double rate = isSeniorCitizen ? 0.12 : 0.10;
    return principal * rate * years;
}

int main() {
    double principal;
    int years;
    char seniorCitizenInput;

    cout << "Enter the principal amount: ";
    cin >> principal;
    
    cout << "Enter the number of years: ";
    cin >> years;
    
    cout << "Is customer senior citizen (y/n): ";
    cin >> seniorCitizenInput;

    bool isSeniorCitizen = (seniorCitizenInput == 'y' || seniorCitizenInput == 'Y');

    double interest = calculateSimpleInterest(principal, years, isSeniorCitizen);
    cout << "Interest: " << interest << endl;

    return 0;
}

