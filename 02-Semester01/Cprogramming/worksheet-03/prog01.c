#include <stdio.h>

int main(){
    int n;
    printf("Enter the total array size (not less than 2) :  ");
    scanf("%d",&n);
    if(n < 2){
        printf("not less than 2 !!\n");
        return 0;
    }
    int arr[n];

    printf("\nEnter the values : ");
    for(int i = 0 ; i < n;i++){
        scanf("%d",&arr[i]);
    }

    int max = arr[0];
    int sec_max = arr[1];
    for(int i = 0; i< n;i++){
        if(arr[i] > max){
            sec_max = max;
            max = arr[i];
        }
    }
    if(sec_max == max){
        printf("-> All are same values - (%d)! \nNot able to find Second largest :)\n",max);
        return 0;
    }
    printf("-> Max is %d\n-> Second Max is %d\n",max,sec_max);
    return 0;
}
