#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rockpaperscissors(int round, int score, int AIscore);

int main(void) {
	puts("Welcome to the rock-paper-scissor game.");
	printf("To begin playing, enter 1. To exit from the game, enter 2: ");
	int menu;
	scanf("%d", &menu);
	if (menu == 1)
		rockpaperscissors(1, 0, 0);
	if (menu == 2)
		puts("Sorry to see you go. Won't you at least try playing?");
	else if (menu != 1 && menu != 2){
		puts("Please enter a valid choice.");
		main();
	}
	return EXIT_SUCCESS;
}


int rockpaperscissors(int round, int score, int AIscore){
	printf("\nRound #%d: Please enter your action (rock = 1, paper = 2, scissor = 3): ", round);
	int x,y, menu;
	time_t t;
	scanf("%d", &x);
	if (x == 1)
		puts("You chose rock");
	else if (x == 2)
		puts("You chose paper");
	else if (x == 3)
		puts("You chose scissor");
	else {
		puts("You chose dynamite! This isn't a valid choice so you lose this round.");
	}

	srand((unsigned) time(&t));
	y = rand() % 3;
	if (y == 0)
		puts("The computer chose rock");
	else if (y == 1)
		puts("The computer chose paper");
	else if (y == 2)
		puts("The computer chose scissor");
	else {
		puts("You chose dynamite! This isn't a valid choice so you lose this round.");
	}

	if ((x == 1 && y == 1) || (x == 2 && y == 2) || (x == 3 && y == 0)) {
		puts("---LOSE---");
		AIscore++;
	}
	else if ((x == 1 && y == 0) || (x == 2 && y == 1) || (x == 3 && y == 2))
		puts("---DRAW---");
	else if ((x == 1 && y == 2) || (x == 2 && y == 0) || (x == 3 && y == 1)){
		puts("---WIN---");
		score++;
	} else {
		puts("Really? You chose dynamite?");
	}

	printf("To play another round, enter 1. To exit from the game, enter 2: ");
	scanf("%d", &menu);
	if (menu == 1) {
		menu = rockpaperscissors(++round, score, AIscore);
		return 2;
	}
	if (menu == 2) {
		printf("\nYour Score: %d      ", score);
		printf("Computer's Score: %d", AIscore);
		if (AIscore > score)
			puts("\nYou've lost!");
		if (AIscore == score)
			puts("\nThe game is a draw. Better luck next time!");
		if (AIscore < score)
			puts("\nYou've won!");
		printf("\nYou have won %d", score);
		printf(" out of %d rounds. ", round);
		puts("Thanks for playing!");
	}
	else
		rockpaperscissors(++round, score, AIscore);
	return 2;
}
