#include "main.h"

/**
 * generate_snake - Function generate and move the snake in the game.
 *
 * @data: a pointer to the game_data structure.
 */
void generate_snake(struct game_data *data)
{
	int i;
	int new_head = (data->head + 1) % 1000;
	int old_tail = data->tail;

	printf("\033[%iB\033[%iC ", data->y[data->tail] + 1, data->x[data->tail] + 1);
	printf("\033[%iF", data->y[data->tail] + 1);

	if (data->x[data->head] == data->x_apple && data->y[data->head] == data->y_apple)
	{
		data->x_apple = -1;
		(data->score)++;

		printf("\033[1A");
		printf("\033[K");
		printf("\033[1A");
		printf("\033[K");
		printf("Best score: %d\nScore: %d\n", data->best_score, data->score);
	}
	else
		data->tail = (data->tail + 1) % 1000;

	data->x[new_head] = (data->x[data->head] + data->x_direction + COLUMNS) % COLUMNS;
	data->y[new_head] = (data->y[data->head] + data->y_direction + ROWS) % ROWS;
	data->head = new_head;

	for (i = data->tail; i != data->head; i = (i + 1) % 1000)
		if (data->x[i] == data->x[data->head] && data->y[i] == data->y[data->head])
			data->game_over = 1;

	printf("\033[%iB\033[%iC█", data->y[data->head] + 1, data->x[data->head] + 1);
	printf("\033[%iF", data->y[data->head] + 1);
	fflush(stdout);

	if (old_tail != data->tail)
	{
		printf("\033[%iB\033[%iC ", data->y[old_tail] + 1, data->x[old_tail] + 1);
		printf("\033[%iF", data->y[old_tail] + 1);
	}
}
