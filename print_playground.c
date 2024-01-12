#include "main.h"

/**
 * print_playground - Function to print the playground
 *                    with borders and spaces.
 */
void print_playground(void)
{
	/* Variable declarations */
	int index_columns = 0;
	int index_rows = 0;

	/* Top line */
	printf("┌");
	for (index_columns = 0; index_columns < COLUMNS; index_columns++)
		printf("─");
	printf("┐\n");

	/* Border left, content, border right */
	for (index_rows = 0; index_rows < ROWS; index_rows++)
	{
		printf("│");
		for (index_columns = 0; index_columns < COLUMNS; index_columns++)
			printf(" ");
		printf("│\n");
	}

	/* Bottom line */
	printf("└");
	for (index_columns = 0; index_columns < COLUMNS; index_columns++)
		printf("─");
	printf("┘\n");

	/* Move cursor back to top */
	printf("\033[%dA", ROWS + 2);
}
