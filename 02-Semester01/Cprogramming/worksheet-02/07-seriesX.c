#include <stdio.h>

int main() {
    int X, n, i;
    long long term = 0, sum = 0;

    printf("Enter X and n: ");
    scanf("%d %d", &X, &n);

    for (i = 1; i <= n; i++) {
        term = term * 10 + X; 
        sum += term;
    }

    printf("Sum = %lld\n", sum);
    return 0;
}
