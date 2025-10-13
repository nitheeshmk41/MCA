#include <stdio.h>

int main(){

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
    int start = 0;
    int end = n-1;

    // while(start <= end){
    //     int temp = arr[start];
    //     arr[start] = arr[end];
    //     arr[end] = temp;

    //     start++;
    //     end--;
    // }

    for(int i = 0; i < n/2;i++){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    for(int i = 0;i< n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
