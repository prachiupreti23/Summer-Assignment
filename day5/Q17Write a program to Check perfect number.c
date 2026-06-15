#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number to check: ");
    scanf("%d", &num);

    // Find and add up all proper divisors
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if the sum of divisors matches the original number
    if (sum == num && num > 0) {
        printf("%d is a PERFECT NUMBER.\n", num);
    } else {
        printf("%d is NOT a PERFECT NUMBER.\n", num);
    }

    return 0;
}