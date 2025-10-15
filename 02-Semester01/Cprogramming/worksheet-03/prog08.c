#include <stdio.h>

int main() {
    int arr[100], n, key, temp[100], j = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter rotation key: ");
    scanf("%d", &key);

    key = key % n;

    for (int i = key; i < n; i++)
        temp[j++] = arr[i];
    for (int i = 0; i < key; i++)
        temp[j++] = arr[i];
    for (int i = 0; i < n; i++)
        arr[i] = temp[i];

    printf("Array after left rotation: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
