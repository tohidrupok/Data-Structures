#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int arr[] = {6,3,2,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr+n); // Sort the array

    int j = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) { // If a new element is found
            j++;
            arr[j] = arr[i]; // Move it to the front
        }
    }

    for (int i = 0; i <= j; i++) {
        cout << arr[i] << " "; // Print the unique elements
    }

    return 0;
}
