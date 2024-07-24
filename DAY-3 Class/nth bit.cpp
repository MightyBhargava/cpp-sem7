#include <iostream>
using namespace std;

int main() {
    int num, bit;
    
    cout << "Enter Number: ";
    if (!(cin >> num)) {
        cout << "Invalid input for number. Please enter an integer." << endl;
        return 1;
    }
    
    cout << "Enter bit number you wish to set: ";
    if (!(cin >> bit) || bit < 0 || bit >= sizeof(int) * 8) {
        cout << "Invalid input for bit number. Please enter a valid bit position." << endl;
        return 1;
    }
    
    num |= (1 << bit);
    cout << "Bit set Successfully\nAnswer: " << num << endl;
    
    return 0;
}

