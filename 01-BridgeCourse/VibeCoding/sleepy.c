/*
Prompt - 
I want to get numerator, denominator from user then divide them, but like sleepy technique
if 25/56 => cancel 5 from numerator and denominator and give 2/6 as answer.
Write it as a program in C.

*/

#include <stdio.h>

int main() {
    int num, den;
    int num_tens, num_units, den_tens, den_units;
    
    printf("Enter numerator: ");
    scanf("%d", &num);
    printf("Enter denominator: ");
    scanf("%d", &den);

    // Extract digits
    num_tens = num / 10;
    num_units = num % 10;
    den_tens = den / 10;
    den_units = den % 10;

    // Check for common digits and cancel one
    if (num_units == den_units && num_units != 0) {
        printf("After sleepy cancel: %d/%d\n", num_tens, den_tens);
    } 
    else if (num_units == den_tens && num_units != 0) {
        printf("After sleepy cancel: %d/%d\n", num_tens, den_units);
    } 
    else if (num_tens == den_units && num_tens != 0) {
        printf("After sleepy cancel: %d/%d\n", num_units, den_tens);
    } 
    else if (num_tens == den_tens && num_tens != 0) {
        printf("After sleepy cancel: %d/%d\n", num_units, den_units);
    } 
    else {
        printf("No common digit to cancel!\n");
    }

    return 0;
}
