#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n, num, mostFrequent, maxCount = 0;
    unordered_map<int, int> freq;

    cout << "Enter size of the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid size. Please enter a positive integer." << endl;
        return 1;
    }

    cout << "Enter elements in the array: " << endl;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        freq[num]++;
        if (freq[num] > maxCount) {
            maxCount = freq[num];
            mostFrequent = num;
        }
    }

    cout << "The most frequent element is: " << mostFrequent << " with " << maxCount << " occurrences." << endl;
    return 0;
}

