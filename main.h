#ifndef MAIN_H
#define MAIN_H

/* Standard library inclusions */
#include <stdio.h>
#include <stdlib.h>
#include <sys/select.h>
#include <termios.h>
#include <unistd.h>

/* Game grid dimensions */
#define COLUMNS 29
#define ROWS 13

/**
 * struct game_data - Stores data for the Solid Snake game.
 *
 * @x: an array storing the x-coordinates of the snake's body segments.
 * @y: an array storing the y-coordinates of the snake's body segments.
 * @x_direction: the current horizontal direction of the snake's movement.
 * @y_direction: the current vertical direction of the snake's movement.
 * @x_apple: the x-coordinate of the apple's position.
 * @y_apple: the y-coordinate of the apple's position.
 * @head: index of the snake's head in the x and y arrays.
 * @tail: index of the snake's tail in the x and y arrays.
 * @score: the player's current score in the game.
 * @best_score: the highest score achieved in the game.
 * @game_over: flag indicating whether the game is over (1) or not (0).
 */
struct game_data
{
	int x[1000];
	int y[1000];
	int x_direction;
	int y_direction;
	int x_apple;
	int y_apple;
	int head;
	int tail;
	int score;
	int best_score;
	int game_over;
};

/* Function prototypes*/
struct termios disable_canonical(void);

void print_game_title(void);
void print_playground(void);
void print_game_over(int score);

int read_best_score(void);
void write_best_score(int score);

void generate_apple(struct game_data *data);
void generate_snake(struct game_data *data);

void get_keyboard_input(int *x_direction, int *y_direction, int *quit);

#endif /* MAIN_H */
