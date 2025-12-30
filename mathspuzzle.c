#include <stdio.h>



int isPrime(int num) {
    int i;
    if (num <= 1)
        return 0;
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}


int main() {
    int choice, number, guess;
    int score = 0;
    int rounds = 0;

    srand(time(0));

    while (1) {
        printf("\n==============================\n");
        printf("   PRIME GUESS MATH PUZZLE\n");
        printf("==============================\n");
        printf("1. Play Game\n");
        printf("2. View Score\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            number = rand() % 50 + 1;  
            rounds++;

            printf("\nRound %d\n", rounds);
            printf("Guess the nature of the number:\n");
            printf("1. Odd\n");
            printf("2. Even\n");
            printf("3. Prime\n");
            printf("Enter your guess: ");
            scanf("%d", &guess);

           
            if (guess < 1 || guess > 3) {
                printf("Invalid choice! No points awarded.\n");
                continue;
            }

            printf("Hint: The number is ");

            if (number % 2 == 0)
                printf("Even");
            else
                printf("Odd");

            if (isPrime(number))
                printf(" and Prime.\n");
            else
                printf(" and NOT Prime.\n");

            
            if ((guess == 1 && number % 2 != 0) ||
                (guess == 2 && number % 2 == 0) ||
                (guess == 3 && isPrime(number))) {
                printf("Correct! 🎉 The number was %d\n", number);
                score += 10;
            } else {
                printf("Wrong! ❌ The number was %d\n", number);
                score -= 5;
            }

        } else if (choice == 2) {
            printf("\nYour Score: %d\n", score);

        } else if (choice == 3) {
            printf("\nThank you for playing!\n");
            printf("Final Score: %d\n", score);
            break;

        } else {
            printf("\nInvalid menu choice! Try again.\n");
        }
    }

    return 0;
}
