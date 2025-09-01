#include <stdio.h>

int main() {
    int n, d1, d2, d3, sum, product;
    printf("Enter a three digit number: ");
    if (scanf("%d", &n) != 1 || n < 100 || n > 999) {
        printf("Invalid input\n");
        return 0;
    }

    d1 = n / 100;
    d2 = (n / 10) % 10;
    d3 = n % 10;

    sum = d1 + d2 + d3;
    product = d1 * d2 * d3;

    if (sum == product)
        printf("The sum of the digits is equal to the product of the digits\n");
    else
        printf("The sum of the digits is NOT equal to the product of the digits\n");

    return 0;
}
