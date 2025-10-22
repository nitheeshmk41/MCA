#include <stdio.h>
#include <stdlib.h>

int main(){
    char *name = "Nitheesh";
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int *arr = malloc(n * sizeof(int));  // 4 * 4

    printf("Enter values to the arr : ");
    for(int i = 0; i < 10;i++){
        scanf("%d",&arr[i]);
        //scanf("%d",arr+i);
    }

    printf("you entered\n");
    for(int i = 0; i < 10;i++){
        printf("%d ",arr[i]);
    }

    printf("\n");

    //2d arrays

    int **matrix = (int **) malloc(2 * sizeof(int *));
    for(int i = 0 ;i < 2;i++){
        //
    }
} 