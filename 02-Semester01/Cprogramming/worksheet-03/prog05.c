#include <stdio.h>

bool find_dup(int arr[], int n){
    //printf("%d",arr[0]);
    bool dup = false;
    for(int i = 0 ; i < n;i++){
        int ele = arr[i];
        printf("%d ",ele);
        for(int j = 0; j < n-1;j++){
            if(ele == arr[j] && i != j){
                dup = true;
            }
        }
    }
    return dup;
}

int main(){
    int temp[] = {1,1,2,2,3,3};
    int temp1[] = {1,2,3,4};
    int num = 5;
    bool ans = find_dup(temp, 6);
    if(ans){
        printf("Have some duplicates in given araay");
    }
    else{
        printf("No duplicates found in the array!!");
    }
    return 0;
}
