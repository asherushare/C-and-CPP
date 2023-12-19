#include <stdio.h>

void printInvertedPyramid(int rows) {
    for (int i = 0; i < rows; i++) {
        // Print spaces before asterisks
        for (int j = 0; j < i; j++) {
            printf(" ");
        }

        // Print asterisks
        for (int k = 0; k < 2 * (rows - i) - 1; k++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }
}

int main() {
    int numRows;

    // Get the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &numRows);

    // Check if the input is non-negative
    if (numRows >= 0) {
        printf("Output:\n");
        printInvertedPyramid(numRows);
    } else {
        printf("Please enter a non-negative number of rows.\n");
    }

    return 0;
}
