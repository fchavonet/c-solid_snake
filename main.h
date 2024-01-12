#ifndef MAIN_H
#define MAIN_H

/* Standard library inclusions */
#include <stdio.h>
#include <stdlib.h>
#include <sys/select.h>
#include <termios.h>
#include <unistd.h>

/* Function prototypes*/
struct termios disable_canonical(void);

void print_game_title(void);

void get_keyboard_input(int *quit);

#endif /* MAIN_H */
