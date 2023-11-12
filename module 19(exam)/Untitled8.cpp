#include <iostream>

using namespace std;

void quicksort(int arr[], int left, int right) {
    int i = left, j = right;
    int pivot = arr[(left + right) / 2];

    while (i <= j) {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    if (left < j)
        quicksort(arr, left, j);
    if (i < right)
        quicksort(arr, i, right);
}

int main() {
    int arr[] = {5, 3, 8, 3, 6, 5, 8};
    int n = sizeof(arr)/sizeof(arr[0]);

    quicksort(arr, 0, n-1); // Sort the array using quicksort

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
