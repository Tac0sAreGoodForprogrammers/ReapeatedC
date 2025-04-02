#include <stdio.h>

int main() {
    int n;

    // Ask user for input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop through numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        // Check if the number is even or odd
        if (i % 2 == 0) {
            printf("%d is even\n", i);
        } else {
            printf("%d is odd\n", i);
        }
    }

    return 0;
}
