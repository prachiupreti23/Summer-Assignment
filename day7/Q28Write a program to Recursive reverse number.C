#include <stdio.h>

int reverse(int num, int rev) {
    if (num == 0) {
        return rev;
    }
    return reverse(num / 10, rev * 10 + num % 10);
}

int main() {
    int number;

    printf("Enter a number: ");
    if (scanf("%d", &number) != 1) {
        return 1;
    }

    int result = reverse(number, 0);
    printf("Reversed number: %d\n", result);

    return 0;
}
