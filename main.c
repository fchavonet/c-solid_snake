#include "main.h"

/**
 * main - Entry point of the program.
 *
 * Return: always 0 (success).
 */
int main(void)
{
	struct termios old_terminal;
	struct game_data data;
	int quit = 0;

	printf("\033[?25l");

	old_terminal = disable_canonical();

	while (quit == 0)
	{
		print_game_title();
		print_playground();

		data.head = 0;
		data.tail = 0;
		data.x[data.head] = COLUMNS / 2;
		data.y[data.head] = ROWS / 2;
		data.x_direction = -1;
		data.y_direction = 0;
		data.x_apple = -1;
		data.y_apple = 0;

		while (quit == 0)
		{
			generate_apple(&data);
			generate_snake(&data);
			usleep(5 * 1000000 / 60);
			get_keyboard_input(&data.x_direction, &data.y_direction, &quit);
		}
	}

	printf("\033[?25h");
	tcsetattr(STDIN_FILENO, TCSANOW, &old_terminal);

	return (0);
}
