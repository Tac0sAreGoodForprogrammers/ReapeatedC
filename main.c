#include <stdio.h>
#include <math.h>

void prime_factors(int n) {
    printf("Prime factors of %d: ", n);
    
    // Divide out all 2s
    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }
    
    // Check odd numbers from 3 upwards, only up to sqrt(n)
    int limit = (int)sqrt(n);
    for (int i = 3; i <= limit; i += 2) {
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
