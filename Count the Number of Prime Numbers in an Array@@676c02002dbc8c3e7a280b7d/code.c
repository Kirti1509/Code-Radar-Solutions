#include <stdio.h>

#include<stdio.h>

int is_prime(int num) {
    if (num <= 1) return 0;  // Numbers less than or equal to 1 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;  // Not prime if divisible by any number
    }
    return 1;  // Prime if not divisible by any number
}

int main() {
    int n, count = 0;
    scanf("%d", &n);  // Input number of elements
    int array[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Count prime numbers in the array
    for (int i = 0; i < n; i++) {
        if (is_prime(array[i])) {
            count++;
        }
    }

    printf("%d", count);  // Output the number of prime numbers
    return 0;
}
