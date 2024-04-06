
#include <iostream>
using namespace std;

void findFrequency(int arr[], int n) {
    // Assuming the maximum value of elements in the array is 1000
    const int MAX_VAL = 1000;
    
    // Initialize hash array with 0
    int frequency[MAX_VAL + 1] = {0};

    // Iterate over each element in the array
    for (int i = 0; i < n; ++i) {
        // Increment the frequency of the current element
        frequency[arr[i]]++;
    }

    // Print the frequency of each element
    for (int i = 0; i <= MAX_VAL; ++i) {
        if (frequency[i] > 0) {
            cout << "Element " << i << " appears " << frequency[i] << " times" << endl;
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    findFrequency(arr, n);

    return 0;
}


