#include <stdio.h>

int main() {
    int n, i, j, num;
    printf("Enter odd size n: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Magic square works for odd n only\n");
        return 0;
    }

    int magic[20][20] = {0};
    i = 0;
    j = n/2;

    for (num = 1; num <= n*n; num++) {
        magic[i][j] = num;
        i--; j++;
        if (num % n == 0) { i += 2; j--; }
        else {
            if (i < 0) i = n-1;
            if (j == n) j = 0;
        }
    }

    printf("Magic Square:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%3d ", magic[i][j]);
        printf("\n");
    }

    return 0;
}
