#include <stdio.h>

int main() {
    int n;
    printf("Enter number of grades: ");
    scanf("%d", &n);

    int grades[100];
    printf("Enter %d grades:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &grades[i]);
    }

    int total = 0;
    for (int i = 0; i < n; i++) {
        total += grades[i];
    }
    float average = (float) total / n;

    int highest = grades[0];
    for (int i = 1; i < n; i++) {
        if (grades[i] > highest) {
            highest = grades[i];
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (grades[j] > grades[j + 1]) {
                int temp = grades[j];
                grades[j] = grades[j + 1];
                grades[j + 1] = temp;
            }
        }
    }

    printf("\nAverage Grade: %.2f\n", average);
    printf("Highest Grade: %d\n", highest);
    printf("Sorted Grades: [");
    for (int i = 0; i < n; i++) {
        printf("%d", grades[i]);
        if (i < n - 1)
            printf(", ");
    }
    printf("]\n");

    return 0;
}
