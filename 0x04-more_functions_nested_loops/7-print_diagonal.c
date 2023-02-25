#include "main.h"

/**
 * print_diagonal - draw a diagonal on the terminal
 * @n: Integer
 */

void print_diagonal(int n)
{
	int j, k;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
		for (j = 1; j <= n; j++)
		{
		for (k = 1; k < j; j++)
		{
		_putchar(' ');
		}
		_putchar('\\');
		}
		_putchar('\n');
	}
}

