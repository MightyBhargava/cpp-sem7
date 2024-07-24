#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string inputStr;
    cout << "Enter a string: ";
    cin >> inputStr;
    string reversedStr = inputStr;
    reverse(reversedStr.begin(), reversedStr.end());
    if (inputStr == reversedStr) {
        cout << "\"" << inputStr << "\" is a palindrome.\n";
    } else {
        cout << "\"" << inputStr << "\" is not a palindrome.\n";
    }
    return 0;
}

   // Check if a number is a palindrome
/*    int inputNum;
    cout << "Enter a number: ";
    cin >> inputNum;

    string inputNumStr = to_string(inputNum);
    string reversedNumStr = inputNumStr;
    reverse(reversedNumStr.begin(), reversedNumStr.end());
    if (inputNumStr == reversedNumStr) {
        cout << inputNum << " is a palindrome.\n";
    } else {
        cout << inputNum << " is not a palindrome.\n";
    }

    return 0;
} */
