#include <stdio.h>

int main() {
    int total = 21;
    int user_pick, computer_pick;

    printf("Welcome to the Matchstick Game!\n");
    printf("Rules: There are 21 matchsticks. You can pick 1-4 at a time.\n");
    printf("Whoever picks the last matchstick loses!\n\n");

    while (total > 1) {
        printf("There are %d matchsticks left. Pick 1-4: ", total);
        scanf("%d", &user_pick);

        if (user_pick < 1 || user_pick > 4) {
            printf("Invalid choice! Pick between 1 and 4.\n");
            continue;
        }

        total -= user_pick;

        if (total == 1) {
            printf("You are forced to pick the last matchstick. You lose!\n");
            break;
        }

        computer_pick = 5 - user_pick;
        total -= computer_pick;
        printf("Computer picked %d matchsticks.\n", computer_pick);
        printf("Matchsticks remaining: %d\n\n", total);
    }

    return 0;
}
