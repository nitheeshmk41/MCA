#include <stdio.h>

int main() {
    int num, den, n1, n2, d1, d2;
    printf("Fractions where Sleepy's Technique works:\n");

    for (num = 10; num < 100; num++) {
        for (den = num+1; den < 100; den++) {
            n1 = num / 10; n2 = num % 10;
            d1 = den / 10; d2 = den % 10;

            if (n2 == d1 && d2 != 0) {
                if ((double)num/den == (double)n1/d2) {
                    printf("%d/%d = %d/%d\n", num, den, n1, d2);
                }
            }
        }
    }

    return 0;
}
