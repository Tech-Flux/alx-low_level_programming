#include "main.h"

/**
 * print_diagonal - prints diagonal line n times.
 * @n: diagonals
 * No return
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(72);
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}

