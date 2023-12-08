#include <stdio.h>

int main() {
    char inputChar;
    
    printf("Enter a character: ");
    scanf(" %c", &inputChar); // Use %c to read a single character

    if (inputChar >= 'a' && inputChar <= 'z') {
        printf("This is a lowercase.\n");
    } else if (inputChar >= 'A' && inputChar <= 'Z') {
        printf("This is an uppercase.\n");
    } else if (inputChar >= '1' && inputChar <= '9') {
        printf("This is a number.\n");
    } else {
        printf("This is a special character.\n");
    }

    return 0;
}
