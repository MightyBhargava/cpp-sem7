#include <iostream>

using namespace std;

int getPersonAge() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    return age;
}

void checkVotingEligibility(int age) {
    const int votingAge = 18;
    if (age >= votingAge) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are allowed to vote after " << (votingAge - age) << " years." << endl;
    }
}

int main() {
    int age = getPersonAge();
    checkVotingEligibility(age);
    return 0;
}
