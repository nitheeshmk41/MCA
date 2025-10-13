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

    int pos, neg, even, odd = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] < 0){
            neg++;
        }
        if (arr[i] > 0)
        {
            pos++;
        }

        if(arr[i] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("On the Array\nPositive Count : %d\nNegative Count : %d\nEven Count : %d\nOdd Count :%d\n",pos,neg,even,odd);

}