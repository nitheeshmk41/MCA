#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int max = (a + b + abs(a - b)) / 2;

    printf("The biggest number is: %d\n", max);

    return 0;
}
