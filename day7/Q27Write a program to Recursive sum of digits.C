#include <stdio.h>

int main() {
    int num, remainder, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Convert negative numbers to positive
    if (num < 0) {
        num = -num;
    }

    // Loop to extract and add each digit
    while (num > 0) {
        remainder = num % 10; // Get the last digit
        sum = sum + remainder; // Add it to the sum
        num = num / 10;        // Remove the last digit
    }

    printf("Sum of digits: %d\n", sum);
    return 0;
}
