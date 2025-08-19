#include <stdio.h>

int main() {
    int n, first, last, temp;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Invalid input! Please enter a positive integer.\n");
        return 0;
    }

    last = n % 10;  // Last digit
    temp = n;

    // Find first digit
    while(temp >= 10) {
        temp /= 10;
    }
    first = temp;

    printf("First digit: %d\n", first);
    printf("Last digit: %d\n", last);

    // Check multiples
    if(last != 0 && first % last == 0) {
        printf("First digit is a multiple of the last digit.\n");
    }
    else if(first != 0 && last % first == 0) {
        printf("Last digit is a multiple of the first digit.\n");
    }
    else {
        printf("Neither digit is a multiple of the other.\n");
    }

    return 0;
}
