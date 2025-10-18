#include <stdio.h>
//#define MAX 5
//#include <limits.h>

int main(){
    //printf("Maximum value of int: %d\n", INT_MAX);
    printf("Enter the number of salesperson : ");
    int MAX;
    scanf("%d",&MAX);

    int sales[MAX];
    printf("Enter the sales of %d salesman : ",MAX);
    for(int i = 0; i <MAX ;i++){
        scanf("%d",&sales[i]);
    }

    // a) Avg sales
    int total = 0;
    int avg = 0;
    int max = sales[0];
    int max_sales_id = 1;

    int min = sales[0];
    int min_sales_id = 1;

    for(int i = 0;i < MAX;i++){
        total += sales[i];
        // b) max sales
        if(max < sales[i]){
            max = sales[i];
            max_sales_id = i+1;
        }
        if(min > sales[i]){
            min = sales[i];
            min_sales_id = i+1;
        }
    }
    avg = total / 2;
    printf("a) Average Sales : %d\n",avg);
    
    // b) Max Sales
    printf("b) Salesperson %d had the highest sales of %d\n",max_sales_id,max);
    // c) Min Sales
    printf("c) Salesperson %d had the lowest sales of %d\n",min_sales_id,min);

    // d) Comparee users
    int amt;
    printf("\n\nEnter amount to check filter the count and sales : ");
    scanf("%d",&amt);

    int count = 0;
    for(int i = 0; i <MAX;i++){
        if(sales[i] >= amt){
            count++;
            printf("Salesperson %d have %d\n",i+1,sales[i]);
        }
    }
    printf("\nd) Total salesperson greater the amount %d is : %d\n",amt,count);
    return 0;
}