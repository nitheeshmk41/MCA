#include <stdio.h>

int main() {
    int n, d1, d2, d3;
    printf("Enter a three digit number: ");
    if (scanf("%d", &n) != 1 || n < 100 || n > 999) {
        printf("Invalid input\n");
        return 0;
    }

    d1 = n / 100;
    d2 = (n / 10) % 10;
    d3 = n % 10;

    if (d1 + d3 == d2)
        printf("The sum of first and last digit is equal to the middle digit\n");
    else
        printf("The sum of first and last digit is NOT equal to the middle digit\n");

    return 0;
}
