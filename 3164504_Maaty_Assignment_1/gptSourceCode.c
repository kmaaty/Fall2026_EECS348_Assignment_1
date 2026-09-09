#include <stdio.h>

int main(void) {
    const int secretNumber = 7;
    int guess;
    int attempt;
    int won = 0;

    printf("Guess a number between 1 and 10.\n");

    for (attempt = 1; attempt <= 3; attempt++) {
        printf("Attempt %d/3. Enter your guess: ", attempt);

        if (scanf("%d", &guess) != 1) {
            printf("Invalid input. Please enter a whole number.\n");
            return 1;
        }

        if (guess == secretNumber) {
            printf("Correct! You win!\n");
            won = 1;
            break;
        } else if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }
    }

    if (!won) {
        printf("Sorry, you lose. The secret number was %d.\n", secretNumber);
    }

    return 0;
}