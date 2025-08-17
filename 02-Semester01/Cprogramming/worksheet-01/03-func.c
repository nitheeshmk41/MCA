#include <stdio.h>

void P(int t){
    if(t <= 2 && t > 0){
        printf("%d\n", 20);
    }
    else if((t <= 16 && t > 13) || t > 30){
        printf("%d\n", 4*(t+2));
    }else{
        int x = t * t;
        printf("%d\n", 4 * (x + 2*t));
    }
}

int main(){
    int t;
    printf("Enter t : ");
    scanf("%d",&t);

    P(t);

    return 0;
}
