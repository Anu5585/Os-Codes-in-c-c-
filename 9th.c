#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    double average = (double)sum / n;

    printf("Average: %.2lf\n", average);

    return 0;
}
