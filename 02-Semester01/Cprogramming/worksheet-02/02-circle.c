#include <stdio.h>
#include <math.h>

int main() {
    float x, y, dist;
    printf("Enter x and y: ");
    scanf("%f %f", &x, &y);

    dist = sqrt(x*x + y*y);

    if (dist < 5)
        printf("The point lies inside the circle\n");
    else if (dist > 5)
        printf("The point lies outside the circle\n");
    else
        printf("The point lies on the circle\n");

    return 0;
}
