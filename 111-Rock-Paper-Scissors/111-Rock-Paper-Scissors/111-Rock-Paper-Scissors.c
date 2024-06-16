/* Rock Paper Scissors */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char *make_computer_move() {
	int n = rand() % 3;

	char *computer_move = "";
	switch (n) {
	case 0:
		computer_move = "rock";
		break;
	case 1:
		computer_move = "paper";
		break;
	case 2:
		computer_move = "scissors";
		break;
	}

	return computer_move;
}

int main() {
	int player_score = 0;
	int computer_score = 0;
	srand(time(NULL));

	printf("Rock Paper Scissors\n");
	while (1) {
		char player_move[9];
		printf("\nMake move:\n");
		fgets(player_move, sizeof(player_move), stdin);
		player_move[strcspn(player_move, "\n")] = '\0';
		printf("Player plays %s...\n", player_move);
		
		char *computer_move = make_computer_move();
		printf("Computer plays %s...\n", computer_move);

		if (strcmp(player_move, "rock") == 0) {
			if (strcmp(computer_move, "rock") == 0) {
				printf("Draw.\n");
			}
			else if (strcmp(computer_move, "paper") == 0) {
				printf("Paper beats rock.\nComputer wins.\n");
				computer_score ++;
			}
			else {
				printf("Rock beats scissors.\nPlayer wins.\n");
				player_score++;
			}
		}
		else if (strcmp(player_move, "paper") == 0) {
			if (strcmp(computer_move, "rock") == 0) {
				printf("Paper beats rock.\nPlayer wins.\n");
				player_score++;
			}
			else if (strcmp(computer_move, "paper") == 0) {
				printf("Draw.\n");
			}
			else {
				printf("Scissors beats paper.\nComputer wins.\n");
				computer_score++;
			}
		}
		else {
			if (strcmp(computer_move, "rock") == 0) {
				printf("Rock beats scissors.\nComputer wins.\n");
				computer_score++;
			}
			else if (strcmp(computer_move, "paper") == 0) {
				printf("Scissors beats paper.\nPlayer wins.\n");
				player_score++;
			}
			else {
				printf("Draw.\n");
			}
		}
		printf("Player: %d\nComputer: %d\n", player_score, computer_score);
	}

	return 0;
}

