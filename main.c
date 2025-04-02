#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX 1000000

// Sieve of Eratosthenes to generate prime numbers up to a limit
void sieve(int primes[], int limit) {
    bool is_prime[limit + 1];
    for (int i = 0; i <= limit; i++) is_prime[i] = true;
    is_prime[0] = is_prime[1] = false;
    
    for (int i = 2; i * i <= limit; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                is_prime[j] = false;
            }
        }
    }
    
    // Store primes in the primes array
    int idx = 0;
    for (int i = 2; i <= limit; i++) {
        if (is_prime[i]) {
            primes[idx++] = i;
        }
    }
}

void prime_factors(int n) {
    printf("Prime factors of %d: ", n);
    
    // Generate primes up to sqrt(n)
    int limit = (int)sqrt(n);
    int primes[MAX];
    sieve(primes, limit);
    
    // Factorize using the primes
    for (int i = 0; primes[i] <= limit && primes[i] <= n; i++) {
        while (n % primes[i] == 0) {
            printf("%d ", primes[i]);
            n = n / primes[i];
        }
    }
    
    // If n is a prime number greater than the limit
    if (n > 1) {
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
