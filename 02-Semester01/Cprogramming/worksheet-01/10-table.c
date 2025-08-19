#include <stdio.h>

int main() {
    int y;
    double x, i;

    printf(" y\t   x\t    i\n");
    printf("-------------------------\n");

    for(y = 1; y <= 6; y++) {
        for(x = 5.5; x <= 12.5; x += 0.5) {
            i = 2 + (y + 0.5 * x);
            printf("%d\t %.1lf\t %.2lf\n", y, x, i);
        }
    }

    return 0;
}
