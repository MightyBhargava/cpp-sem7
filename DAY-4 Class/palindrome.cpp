#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

bool isPalindrome(string str) {
    str.erase(remove_if(str.begin(), str.end(), ::isspace), str.end());
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());
    return str == reversedStr;
}

int main() {
    string inputStr;
    
    cout << "Enter the string: ";
    getline(cin, inputStr);
    
    if (isPalindrome(inputStr)) {
        cout << "The given string is PALINDROME" << endl;
    } else {
        cout << "The given string is NOT PALINDROME" << endl;
    }
    
    return 0;
}
