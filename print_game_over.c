#include "main.h"

/**
 * print_game_over - Function to print the game over message.
 *
 * @score: score to be written to the best_score.txt file.
 */
void print_game_over(int score)
{
	/* Move the cursor to the appropriate positions and display the game over message */
	printf("\033[%dB\033[%dC Game Over ! ", ROWS / 2 + 1, COLUMNS / 2 - 5);
	printf("\033[%dF", ROWS / 2);

	/* Flush the output buffer to ensure immediate display */
	fflush(stdout);

	/* Wait for user input (a keypress) before continuing */
	getchar();

	write_best_score(score);

	/* Clear the screen and move the cursor to the top-left corner */
	printf("\033[2J\033[H");
}
