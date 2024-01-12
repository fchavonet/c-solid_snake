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
	}
	else
		data->tail = (data->tail + 1) % 1000;

	data->x[new_head] = (data->x[data->head] + data->x_direction + COLUMNS) % COLUMNS;
	data->y[new_head] = (data->y[data->head] + data->y_direction + ROWS) % ROWS;
	data->head = new_head;

	printf("\033[%iB\033[%iC█", data->y[data->head] + 1, data->x[data->head] + 1);
	printf("\033[%iF", data->y[data->head] + 1);
	fflush(stdout);

	if (old_tail != data->tail)
	{
		printf("\033[%iB\033[%iC ", data->y[old_tail] + 1, data->x[old_tail] + 1);
		printf("\033[%iF", data->y[old_tail] + 1);
	}
}
