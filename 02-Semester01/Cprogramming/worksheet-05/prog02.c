#include <stdio.h>

int main() {
    int max_ques;
    printf("Enter the number of questions in the quiz: ");
    scanf("%d", &max_ques);

    int keys[max_ques];
    printf("Enter the answer key (%d integers): ", max_ques);
    for (int i = 0; i < max_ques; i++) {
        scanf("%d", &keys[i]);
    }

    char stop;
    do {
        int correct = 0, ans;

        printf("\nEnter student answers (%d integers): ", max_ques);
        for (int i = 0; i < max_ques; i++) {
            scanf("%d", &ans);
            if (ans == keys[i]) {
                correct++;
            }
        }

        double score = ((double)correct / max_ques) * 100.0;
        printf("Total correct: %d out of %d\n", correct, max_ques);
        printf("Average score: %.2f%%\n", score);

        printf("\nGrade another quiz? (y/n): ");
        scanf(" %c", &stop); 

    } while (stop == 'y' || stop == 'Y');

    printf("\nThank you for using the quiz grading program!\n");
    return 0;
}
