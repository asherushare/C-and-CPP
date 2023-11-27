#include <stdio.h>

// Function to print unique elements in an array
void printUniqueElements(int arr[], int size) {
    printf("Unique elements in the array: ");

    for (int i = 0; i < size; i++) {
        int isUnique = 1; // Flag to check uniqueness

        // Check if the current element is repeated
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0; // Not unique
                break;
            }
        }

        // If the element is unique, print it
        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
}

int main() {
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[100];

    // Input elements of the array
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function to print unique elements
    printUniqueElements(arr, size);

    return 0;
}
