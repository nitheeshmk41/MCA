#include <stdio.h>

int main(){
    int arr[] = {1,2,3,3,4,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int dup = -1;
    for(int i = 0; i < n-1;i++){
        if(arr[i] +1 != arr[i+1] ){
            dup = arr[i+1];
            break;
        }
    }
    printf("%d\n",dup);
}