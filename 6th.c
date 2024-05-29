#include <stdio.h>

int reverseNumber(int num) {
    int reversedNum = 0, remainder;

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    return reversedNum;
}

int main() {
    int num = 5585520;

    printf("Original Number: %d\n", num);
    printf("Reversed Number: %d\n", reverseNumber(num));

    return 0;
}
