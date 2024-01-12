#include "main.h"

/**
 * get_keyboard_input - Function to get keyboard input.
 *
 * @x_direction: pointer to the current X direction.
 * @y_direction: pointer to the current Y direction.
 * @quit: pointer to the quit flag.
 */
void get_keyboard_input(int *x_direction, int *y_direction, int *quit)
{
	struct timeval tv;
	fd_set fds;

	tv.tv_sec = 0;
	tv.tv_usec = 0;

	FD_ZERO(&fds);
	FD_SET(STDIN_FILENO, &fds);
	select(STDIN_FILENO + 1, &fds, NULL, NULL, &tv);

	if (FD_ISSET(STDIN_FILENO, &fds))
	{
		int ch = getchar();

		if (ch == 27)
		{
			*quit = 1;
			printf("\033[2J\033[H");
		}
		else if (ch == 'q' && *x_direction != 1)
		{
			*x_direction = -1;
			*y_direction = 0;
		}
		else if (ch == 'd' && *x_direction != -1)
		{
			*x_direction = 1;
			*y_direction = 0;
		}
		else if (ch == 's' && *y_direction != -1)
		{
			*x_direction = 0;
			*y_direction = 1;
		}
		else if (ch == 'z' && *y_direction != 1)
		{
			*x_direction = 0;
			*y_direction = -1;
		}
	}
}
