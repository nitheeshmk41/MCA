#include <stdio.h>

int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    if(n < 1){
        return 0;
    }
    int arr[n];
    printf("Enter the values for the array : ");
    for(int i = 0; i < n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0;i<n;i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] == arr[j]){
                printf("Found Duplicates!\n");
                return 0;
            }
        }
    }
    printf("No duplicated found!!\n");
    return 0;
}
