#include <stdio.h>
#include <stdlib.h>

int mergeArrays(int merged[], int s1[], int n1, int s2[], int n2, int s3[], int n3) {
    int k = 0;
    for (int i = 0; i < n1; i++) merged[k++] = s1[i];
    for (int i = 0; i < n2; i++) merged[k++] = s2[i];
    for (int i = 0; i < n3; i++) merged[k++] = s3[i];
    return k; 
}

int removeDuplicates(int arr[], int n, int unique[]) {
    int u = 0;
    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < u; j++) {
            if (arr[i] == unique[j]) {
                found = 1;
                break;
            }
        }
        if (!found)
            unique[u++] = arr[i];
    }
    return u; 
}


void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1)
            printf(", ");
    }
    printf("]\n");
}

int main() {
    int s1[50], s2[50], s3[50];
    int n1, n2, n3;

    printf("Enter number of items in Section 1: ");
    scanf("%d", &n1);
    printf("Enter item IDs for Section 1:\n");
    for (int i = 0; i < n1; i++)
        scanf("%d", &s1[i]);

    printf("\nEnter number of items in Section 2: ");
    scanf("%d", &n2);
    printf("Enter item IDs for Section 2:\n");
    for (int i = 0; i < n2; i++)
        scanf("%d", &s2[i]);

    printf("\nEnter number of items in Section 3: ");
    scanf("%d", &n3);
    printf("Enter item IDs for Section 3:\n");
    for (int i = 0; i < n3; i++)
        scanf("%d", &s3[i]);

    int merged[150];
    int total = mergeArrays(merged, s1, n1, s2, n2, s3, n3);

    int unique[150];
    int uniqueCount = removeDuplicates(merged, total, unique);

    sortArray(unique, uniqueCount);
    
    printf("\nFinal consolidated and sorted list:\n");
    printArray(unique, uniqueCount);

    return 0;
}
