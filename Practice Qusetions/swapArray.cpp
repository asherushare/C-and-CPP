#include <iostream>
using namespace std;

// Function to swap elements of two arrays
void swapArrays(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        // Swap elements at the same index in both arrays
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}

// Function to print the elements of an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int size = 5; // Assuming arrays of size 5 for demonstration

    int array1[size];
    int array2[size];

    // Input the elements of the first array
    cout << "Enter elements of the first array: ";
    for (int i = 0; i < size; i++) {
        cin >> array1[i];
    }

    // Input the elements of the second array
    cout << "Enter elements of the second array: ";
    for (int i = 0; i < size; i++) {
        cin >> array2[i];
    }

    // Print original arrays
    cout << "Original arrays:" << endl;
    cout << "Array 1: ";
    printArray(array1, size);
    cout << "Array 2: ";
    printArray(array2, size);

    // Swap arrays
    swapArrays(array1, array2, size);

    // Print arrays after swapping
    cout << "\nArrays after swapping:" << endl;
    cout << "Array 1: ";
    printArray(array1, size);
    cout << "Array 2: ";
    printArray(array2, size);

    return 0;
}
