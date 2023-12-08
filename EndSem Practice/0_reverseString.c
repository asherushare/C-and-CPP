#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];

    // Input a string from the user
    printf("Enter a string: ");
    scanf("%s", inputString);

    // Find the length of the string
    int length = strlen(inputString);

    // Reverse the string
    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", inputString[i]);
    }

    return 0;
}
