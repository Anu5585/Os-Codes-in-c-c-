#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers (separated by a space): ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap using a temporary variable
    int temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
