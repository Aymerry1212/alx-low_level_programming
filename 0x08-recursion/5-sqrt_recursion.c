#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the natural square root
 *
 * Return: the natyral square root
 */
int _sqrt_recursion(int n)
{
	int sqrt = n;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (n);
	return (_sqrt_recursion(n + 1));
}
