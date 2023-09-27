#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int lives, hardness_level, range;
    printf("  Number Guessing Game\n");
    printf("-------------------------\n");
    printf( "Select the hardness level\n"
            "'1' for Easy\n"
            "'2' for Hard\n"
            "->");
    scanf("%d", &hardness_level);
    if (hardness_level == 1) {
        lives = 15;
        range = 100;
    } else if (hardness_level == 2){
        lives = 10;
        range = 1000;
    }
    int chosed_number, guessed_number;
    srand(time(0));
    chosed_number = (rand() % range) + 1;
    int total_lives = lives;
    while (lives > 0) {
        system("cls");
        printf("  Number Guessing Game\n");
        printf("-------------------------\n");
        printf("Lives\n");
        for (int i = 0; i < lives; i++) {
            printf("| ");
        }
        printf("\n\n");
        printf("The computer chose a number between 1 and %d\n\n", range);
        if (lives < total_lives) {
            if ((guessed_number < chosed_number + 10) && (guessed_number > chosed_number)) {
                printf("A bit high, you lose a life\n");
            } else if ((guessed_number > chosed_number - 10) && (guessed_number < chosed_number)) {
                printf("A bit low, you lose a life\n");
            } else if (guessed_number > chosed_number) {
                printf("Too high, you lose a life\n"); 
            } else if (guessed_number < chosed_number) {
                printf("Too low, you lose a life\n");
            }
            printf("Guess again.\n->");
        } else {
            printf("Guess the number..\n->");
        }
        scanf("%d", &guessed_number);
        if (chosed_number != guessed_number) {
            lives--;
        }
        else if (chosed_number == guessed_number) {
            printf("%d was the number, you won!", chosed_number);
            break;
        }
        if (lives == 0) {
            printf( "You ran out of lives\n"
                    "It was %d\n", chosed_number);
        }
    }
    return 0;
}