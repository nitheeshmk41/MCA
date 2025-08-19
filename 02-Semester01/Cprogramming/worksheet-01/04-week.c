#include <stdio.h>

int main() {
    int day, month, year;
    int CC, YY, part1, part2, part3, total, dayIndex;

    printf("Enter date (DD MM YYYY): ");
    scanf("%d %d %d", &day, &month, &year);

    CC = year / 100;   
    YY = year % 100;   

    part1 = (CC / 4) - (2 * CC) - 1;
    part2 = (5 * YY) / 4;
    part3 = (26 * (month + 1)) / 10;

    total = part1 + part2 + part3 + day;
    dayIndex = total % 7;

    switch(dayIndex) {
        case 0: printf("Sunday\n"); break;
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
    }

    return 0;
}
