#include <stdio.h>

int main() {
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input the elements of the array
    int arr[100];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    // Print unique elements
    printf("Unique elements: ");
    for (int i = 0; i < size; ++i) {
        int isUnique = 1;  // Assume the element is unique

        // Check if the current element is repeated
        for (int j = 0; j < size; ++j) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0;  // Mark as not unique
                break;
            }
        }

        // If the element is unique, print it
        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");

    return 0;
}
