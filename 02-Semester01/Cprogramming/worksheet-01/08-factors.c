#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors of %d (excluding itself): ", n);

    for(i = 1; i < n; i++) {
        if(n % i == 0) {
            printf("%d ", i);
            sum += i;
        }
    }

    printf("\n");

    if(sum == n) {
        printf("%d is a perfect number.\n", n);
    } else {
        printf("%d is not a perfect number.\n", n);
    }

    return 0;
}
