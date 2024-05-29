#include <stdio.h>

int main() {
    int intCount = 0, floatCount = 0, charCount = 0;
    char input[50];

    printf("Enter input  ");

    while (scanf("%s", input) == 1) {
        if (input[0] == 'e' && input[1] == 'x' && input[2] == 'i' && input[3] == 't') {
            break;
        }

        // Check if it's an integer
        if (atoi(input) != 0 || input[0] == '0') {
            intCount++;
            printf("Input is an integer.\n");
        }
        // Check if it's a float
        else if (atof(input) != 0) {
            floatCount++;
            printf("Input is a float.\n");
        }
        // It's a character
        else {
            charCount++;
            printf("Input is a character.\n");
        }

        printf("Enter input (type 'exit' to end): ");
    }

    printf("\nCounts:\nIntegers: %d\nFloats: %d\nCharacters: %d\n", intCount, floatCount, charCount);
        return 0 ;
}