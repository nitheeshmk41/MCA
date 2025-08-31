#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int SIZE = 8;
    double scores[SIZE];

    cout << "Enter 8 scores out of ten points:\n";
    for (int i = 0; i < SIZE; i++) {
        cin >> scores[i];
    }

    double minScore = scores[0], maxScore = scores[0], sum = 0.0;

    for (int i = 0; i < SIZE; i++) {
        if (scores[i] < minScore) minScore = scores[i];
        if (scores[i] > maxScore) maxScore = scores[i];
        sum += scores[i];
    }

    double total = sum - (minScore + maxScore);
    double average = total / (SIZE - 2);

    cout << fixed << setprecision(2);
    cout << "Your lowest score is " << minScore << endl;
    cout << "Your maximum score is " << maxScore << endl;
    cout << "Your total point is " << total << endl;
    cout << "Your average point is " << average << endl;

    return 0;
}
