#include <iostream>
#include <unistd.h>

using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0, avg = 0, n, i;

    n = fork();

    if (n > 0) { // Parent process
        for (i = 0; i < 10; i++) {
            sum += a[i];
        }
        avg = sum / 10;

        cout << "Parent process" << endl;
        cout << "Sum of all elements: " << sum << endl;
        cout << "Average of all elements: " << avg << endl;
    } else if (n == 0) { // Child process
        int childSum = 0;
        for (i = 0; i < 5; i++) { // Calculate sum for half of the elements
            childSum += a[i];
        }

        cout << "Child process" << endl;
        cout << "Sum of half elements: " << childSum << endl;
    }

    return 0;
}
