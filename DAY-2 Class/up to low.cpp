#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class StringCaseConverter {
private:
    string str;
public:
    void setString(const string& input) {
        str = input;
    }

    string toUpperCase() {
        string upperStr = str;
        transform(upperStr.begin(), upperStr.end(), upperStr.begin(), ::toupper);
        return upperStr;
    }

    string toLowerCase() {
        string lowerStr = str;
        transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
        return lowerStr;
    }
};

int main() {
    StringCaseConverter converter;

    string inputStr;
    cout << "Enter the string: ";
    cin>>inputStr;

    converter.setString(inputStr);

    cout << "The string in upper case: " << converter.toUpperCase()<<"\n" ;
    cout << "The string in lower case: " << converter.toLowerCase() ;

    return 0;
}
