#include <stdio.h>

int find_max(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int a = 15;
    int b = 25;
    int result;

    result = find_max(a, b);

    printf("Maximum value is: %d\n", result);

    return 0;
}
