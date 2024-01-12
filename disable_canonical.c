#include "main.h"

/**
 * disable_canonical - Function to disable canonical mode
 *                     for the terminal input.
 *
 * This function disables canonical mode for the terminal input,
 * which means that characters are not buffered and not echoed
 * to the screen during program execution.
 *
 * Return: the previous terminal settings
 *         before switching to non-canonical mode.
 */
struct termios disable_canonical(void)
{
	/* Variable declarations */
	struct termios old_terminal;
	struct termios new_terminal;

	/* Get the current terminal settings and store them in old_terminal */
	tcgetattr(STDIN_FILENO, &old_terminal);
	/* Create a copy of the old terminal settings */
	new_terminal = old_terminal;
	/* Disable canonical mode and echoing */
	new_terminal.c_lflag &= ~(ICANON | ECHO);
	/* Set the new terminal settings immediately */
	tcsetattr(STDIN_FILENO, TCSANOW, &new_terminal);

	/* Return the previous terminal settings */
	return (old_terminal);
}
