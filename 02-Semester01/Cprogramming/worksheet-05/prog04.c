#include <stdio.h>

int main() {
    int n, m, k;
    printf("Enter three positive integers (n, m, k): ");
    scanf("%d %d %d", &n, &m, &k);

    int count = 0;  
    int p = 0;       

    for (int i = k; i >= 1; i--) {
        if (n % i == 0 && m % i == 0) {
            count++;
            if (count == 3) {
                p = i;
                break;
            }
        }
    }

    if (count < 3)
        p = 0;

    printf("Result: %d\n", p);

    return 0;
}
