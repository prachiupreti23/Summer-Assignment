#include <stdio.h>

int main() {
    long long num, maxPrime = -1;

    printf("Enter an integer: ");
    scanf("%lld", &num);
    
    long long temp = num;

    // Divide out all factors of 2
    while (temp % 2 == 0) {
        maxPrime = 2;
        temp /= 2;
    }

    // Divide out odd factors up to the square root of the remaining number
    for (long long i = 3; i * i <= temp; i += 2) {
        while (temp % i == 0) {
            maxPrime = i;
            temp /= i;
        }
    }

    // If the remaining component is greater than 2, it is a prime factor itself
    if (temp > 2) {
        maxPrime = temp;
    }

    if (maxPrime != -1 && num > 1) {
        printf("The largest prime factor of %lld is %lld.\n", num, maxPrime);
    } else {
        printf("No valid prime factors found.\n");
    }

    return 0;
}
