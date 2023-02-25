#include "main.h"

/**
 * print_numbers - Print the numbers from 0 to 9
 * Return: nothing on success
 */

void print_numbers(void)

{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
}
