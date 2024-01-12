#include "main.h"

/**
 * read_best_score - Function to read the best score
 *                   from best_score.txt file.
 *
 * Return: an integer representing the best score
 *         read from the best_score.txt file.
 */
int read_best_score(void)
{
	/* Variable declarations */
	int best_score = 0;

	FILE *file = fopen("best_score.txt", "r");

	if (file != NULL)
	{
		fscanf(file, "%d", &best_score);
		fclose(file);
	}

	return (best_score);
}

/**
 * write_best_score - Function to write the best score to best_score.txt file.
 *
 * @score: score to be written to the best_score.txt file
 *         if it's higher than the current best score.
 */
void write_best_score(int score)
{
	/* Variable declarations */
	int best_score = read_best_score();

	if (score > best_score)
	{
		FILE *file = fopen("best_score.txt", "w");

		if (file != NULL)
		{
			fprintf(file, "%d", score);
			fclose(file);
		}
	}
}
