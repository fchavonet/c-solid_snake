#include "main.h"

/**
 * main - Entry point of the program.
 *
 * Return: always 0 (success).
 */
int main(void)
{
	struct termios old_terminal;
	int quit = 0;

	printf("\033[?25l");

	old_terminal = disable_canonical();

	while (quit == 0)
	{
		print_game_title();

		while (quit == 0)
		{
			get_keyboard_input(&quit);
		}
	}

	printf("\033[?25h");
	tcsetattr(STDIN_FILENO, TCSANOW, &old_terminal);

	return (0);
}
