#include <stdio.h>

int stringLength(const char* str) {
    int length = 0;

    while (str[length] != '\0') {
        ++length;
    }

    return length;
}

int main() {
    const char* myString = "This Program Counts the Digits!";
    
    printf("Length of the string: %d\n", stringLength(myString));

    return 0;
}
