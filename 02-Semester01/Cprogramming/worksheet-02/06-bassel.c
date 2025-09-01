#include <stdio.h>
#include <math.h>

int main() {
    double x, term, sum = 0;
    int m, i, fact;

    printf("Enter x: ");
    scanf("%lf", &x);

    for (m = 0; m < 20; m++) {
        fact = 1;
        for (i = 1; i <= m; i++) fact *= i;
        term = pow(-1, m) * pow(x/2.0, 2*m) / (fact * fact);
        sum += term;
    }

    printf("J0(%.2lf) = %lf\n", x, sum);
    return 0;
}
