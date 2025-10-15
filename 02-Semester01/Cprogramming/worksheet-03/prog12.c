#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr[100], n, k;
    bool found = false;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k distance: ");
    scanf("%d", &k);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j <= i + k && j < n; j++) {
            if (arr[i] == arr[j]) {
                found = true;
                break;
            }
        }
        if (found)
            break;
    }

    if (found)
        printf("Duplicates found within %d distance.\n", k);
    else
        printf("No duplicates found within %d distance.\n", k);

    return 0;
}
