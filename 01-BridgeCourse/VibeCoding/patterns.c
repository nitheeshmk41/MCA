
/*
**Prompt:**

> Write a C program that prints 5 small patterns using nested loops.
> The patterns should be:
>
> 1. Right-angled triangle (stars)
> 2. Inverted right-angled triangle (stars)
> 3. Number triangle (1 to n in each row)
> 4. Repeating number triangle (same number in each row)
> 5. Hollow square (stars at borders)
>    For each pattern, print the pattern name before it and include the expected output as a block comment right after the code for that pattern.
*/

#include <stdio.h>

int main() {
    int i, j;

    // 1. Right-angled triangle
    printf("\nPattern 1:\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    /*
    Output:
    * 
    * * 
    * * * 
    * * * * 
    * * * * * 
    */

    // 2. Inverted right-angled triangle
    printf("\nPattern 2:\n");
    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    /*
    Output:
    * * * * * 
    * * * * 
    * * * 
    * * 
    * 
    */

    // 3. Number triangle
    printf("\nPattern 3:\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
    /*
    Output:
    1 
    1 2 
    1 2 3 
    1 2 3 4 
    1 2 3 4 5 
    */

    // 4. Repeating number triangle
    printf("\nPattern 4:\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++)
            printf("%d ", i);
        printf("\n");
    }
    /*
    Output:
    1 
    2 2 
    3 3 3 
    4 4 4 4 
    5 5 5 5 5 
    */

    // 5. Hollow square
    printf("\nPattern 5:\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            if (i == 1 || i == 5 || j == 1 || j == 5)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    /*
    Output:
    * * * * * 
    *       * 
    *       * 
    *       * 
    * * * * * 
    */

    return 0;
}
