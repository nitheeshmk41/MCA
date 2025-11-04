#include <stdio.h>

int main(void){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter days : ");
    for(int i =0; i <n;i++){
        scanf("%d",&arr[i]);
    }

    int tar;
    printf("Enter the targeted day : ");
    scanf("%d",&tar);

    int count = 0;
    for(int i =0; i < n;i++){
        if(arr[i] == tar){
            count++;
        }
    }

    int ans[count];
    printf("[ ");
    for(int i =0; i < count;i++){
        ans[i] = tar;
        printf("%d ",ans[i]);
    }
    printf("]\n");

    printf("The occarace of %d is : %d\n",tar,count);
}