#include <stdio.h>

int main(){
    printf("Enter x : ");

    int x;
    scanf("%d", &x);

    float numerator = (x*x*x) + 2*(x*x) + x - 6.3;
    float denominator = (x*x) + 0.05*x + 3.14;

    float ans = numerator / denominator;

    printf("Answers -> %f", ans);
}