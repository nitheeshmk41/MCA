#include <stdio.h>

int main(){
    int n,i,tar;
    printf("Enter n : ");
    scanf("%d",&n);
    if(n < 1){
        printf("Size not less than 1\n");
        return 0;
    }
    int arr[n];
    printf("Enter values : ");
    for(int i = 0; i < n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the target : ");
    scanf("%d",&tar);

    for(int i = 0; i < n;i++){
        if(arr[i] == tar){
            printf("Element found in %d'th index\n",i);
            return 0;
        }
    }
    printf("Elemnet not found");
    return 0;
}