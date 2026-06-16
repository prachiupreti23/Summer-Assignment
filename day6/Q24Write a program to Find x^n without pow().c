#include <stdio.h>

double power(double x, int n) {
    double ans = 1.0;
    long long nn = n;
    
    if (nn < 0) {
        nn = -nn;
    }
    
    while (nn > 0) {
        if (nn % 2 == 1) {
            ans = ans * x;
            nn = nn - 1;
        } else {
            x = x * x;
            nn = nn / 2;
        }
    }
    
    if (n < 0) {
        ans = (double)(1.0) / (double)(ans);
    }
    return ans;
}

int main() {
    double x;
    int n;
    printf("Enter base (x) and exponent (n): ");
    scanf("%lf %d", &x, &n);
    printf("%.2f^%d = %f\n", x, n, power(x, n));
    return 0;
}
