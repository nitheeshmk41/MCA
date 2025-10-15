#include <stdio.h>
#include <stdbool.h>

void printElements(int arr[], int n, int k) {
    int i, j;
    int condition = n / k;

    printf("Elements appearing more than n/k times:\n");

    for(i = 0; i < n; i++) {
        int count = 0;

        for(j = 0; j < n; j++) {
            if(arr[j] == arr[i])
                count++;
        }

        bool alreadyPrinted = false;
        for(j = 0; j < i; j++) {
            if(arr[j] == arr[i]) {
                alreadyPrinted = true;
                break;
            }
        }

        if(count > condition && !alreadyPrinted) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    if(n > 100){
        printf("'n' Not greater than 100 !!");
        return 0;
    }
    int arr[n];
    for(int i = 0; i < n;i++){
        scanf("%d",&arr[i]);
    }
    
    int k = 8;

    printElements(arr, n, k);

    return 0;
}
