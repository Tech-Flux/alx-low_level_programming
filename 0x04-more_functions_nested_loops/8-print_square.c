#include "main.h"

/**
 * print_square.
 * @size of the square.
 * No return.
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(45);
		}
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
