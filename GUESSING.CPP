#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	clrscr();
	int random, guess;
	int no_of_guess=0;
	srand(time(NULL));

	printf("Welcome to the world of Guessing Numbers.\n");
	random = rand() % 100 +1;

	do {
		printf("\nPlease enter your guess (between 1 to 100): ");
		scanf("%d", &guess);
		no_of_guess++;

		if(guess<random) {
			printf("Guess a larger number.\n");
		} else if(guess>random) {
			printf("Guess a smaller number.\n");
		} else {
			printf("Congratulations! You have successfully guessed the number in %d attempts.", no_of_guess);
		}
	} while(guess!=random);

	printf("\n Bye Bye, Thanks for playing.");
	printf("\nDeveloped by: HASHMAT ZAHRA");
	getch();
	return 0;
}