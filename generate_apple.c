#include "main.h"

/**
 * generate_apple - Function to generate the apple's position in the game.
 *
 * @data: a pointer to the game_data structure.
 */
void generate_apple(struct game_data *data)
{
	int i = 0;

	if (data->x_apple < 0)
	{
		do {
			data->x_apple = rand() % (COLUMNS - 1);
			data->y_apple = rand() % (ROWS - 1);
		} while (data->x_apple == data->x[data->head] && data->y_apple == data->y[data->head]);

		for (i = data->tail; i != data->head; i = (i + 1) % 1000)
		{
			if (data->x[i] == data->x_apple && data->y[i] == data->y_apple)
			{
				data->x_apple = -1;
				break;
			}
		}

		if (data->x_apple >= 0)
		{
			printf("\033[%iB\033[%iC❤", data->y_apple + 1, data->x_apple + 1);
			printf("\033[%iF", data->y_apple + 1);
		}
	}
}
