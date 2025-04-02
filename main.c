#include <stdio.h>

void prime_factors(int n) {
    printf("Prime factors of %d: ", n);
    
    // Divide out all 2s
    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }
    
    // Divide by odd numbers from 3 upwards
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
    
    // If n is a prime number greater than 2
    if (n > 2) {
        printf("%d ", n);
    }
    
    printf("\n");
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    prime_factors(number);
    return 0;
}
