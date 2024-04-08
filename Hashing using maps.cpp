#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    unordered_map<int, int> frequency;

    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
        // Increment frequency of the current element
        frequency[arr[i]]++;
    }

    // Print elements and their frequencies
    cout << "Element   Frequency\n";
    for (auto it = frequency.begin(); it != frequency.end(); ++it) {
        cout << it->first << "         " << it->second << endl;
    }

    return 0;
}
