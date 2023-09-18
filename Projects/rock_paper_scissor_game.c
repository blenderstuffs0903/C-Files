#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void user_prompt();

int main() {
    int computer_choice, player_choice;
    char choices[3][10] = {"Rock", "Paper", "Scissor"};
    system("cls");
    user_prompt();
    scanf("%d", &player_choice);
    --player_choice;
    srand(time(0));
    computer_choice = rand() % 3;
    system("cls");
    printf("You chose '%s'\n", choices[player_choice]);
    printf("Computer chose '%s'\n", choices[computer_choice]);
    if (player_choice == computer_choice){
        printf("Its a draw!");
    } else if(player_choice == 0 && computer_choice == 2) {
        printf("You won!");
    } else if(player_choice == 2 && computer_choice == 0) {
        printf("You lose.");
    } else if(player_choice > computer_choice) {
        printf("You won!");
    } else {
        printf("You lose.");
    }
    return 0;
}

void user_prompt() {
    printf("ROCK, PAPER, SCISSOR GAME\n");
    printf("=========================\n\n");
    printf("Enter '1' for rock.\n");
    printf("Enter '2' for paper.\n");
    printf("Enter '3' for scissor.\n");
    printf("Enter your choice: ");
}