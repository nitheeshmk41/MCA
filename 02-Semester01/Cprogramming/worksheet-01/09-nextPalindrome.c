#include <stdio.h>

int isPalindrome(int num) {
    int reversed = 0, temp = num;

    while(temp > 0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp = temp / 10;
    }

    return (reversed == num);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    n = n + 1;

    while(1) {
        if(isPalindrome(n)) {
            printf("Next smallest palindrome of %d is %d\n", n-1, n);
            break;
        }
        n++;
    }

    return 0;
}
