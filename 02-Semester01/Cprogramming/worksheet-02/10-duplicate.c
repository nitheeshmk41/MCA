#include <stdio.h>

int main() {
    int n, i, x, sum = 0, actualSum = 0;
    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        scanf("%d", &x);
        sum += x;
        actualSum += i;
    }

    printf("Duplicate number is %d\n", sum - actualSum);
    return 0;
}
