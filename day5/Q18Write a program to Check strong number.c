#include <stdio.h>

int main() {
    int num, temp, rem, sum = 0;

    printf("Enter a number to check: ");
    scanf("%d", &num);

    temp = num;

    // Process each digit
    while (temp > 0) {
        rem = temp % 10;
        
        // Calculate factorial of the current digit
        int fact = 1;
        for (int i = 1; i <= rem; i++) {
            fact *= i;
        }
        
        sum += fact;
        temp /= 10;
    }

    // Check if total factorial sum matches the original number
    if (sum == num) {
        printf("%d is a STRONG NUMBER.\n", num);
    } else {
        printf("%d is NOT a STRONG NUMBER.\n", num);
    }

    return 0;
}