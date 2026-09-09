#include <stdio.h>

int main() {
    int secret = 7;
    int guess;
    int max_tries = 3;
    int won = 0;

    printf("Guess a number between 1 and 10.\n");

    for (int i = 1; i <= max_tries; i++) {
        printf("Attempt %d/%d. Enter your guess: ", i, max_tries);
        scanf("%d", &guess);

        if (guess == secret) {
            printf("Correct! You win!\n");
            won = 1;
            break;
        } else if (guess < secret) {
            if (i < max_tries) {
                printf("Too low! Try again.\n");
            }
        } else {
            if (i < max_tries) {
                printf("Too high! Try again.\n");
            }
        }
    }

    if (!won) {
        printf("Out of tries! You lose. The secret number was %d.\n", secret);
    }

    return 0;
}