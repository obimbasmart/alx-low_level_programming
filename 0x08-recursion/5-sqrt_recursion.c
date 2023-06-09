#include "main.h"

/**
 * _sqrt_recursion - get the square root of a number
 * @n: integer number
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
	{
		return (n);
	}
	if (n < 0)
		return (-1);
	return (_get_sqrt_(n, 1));
}

/**
 * _get_sqrt_ - get the sqrt of a number recursively
 * @n: the number
 * @guess: guess
 * Return: int
 */
int _get_sqrt_(int n, int guess)
{
	if (guess == n / 2)
		return (-1);
	if (guess * guess == n)
		return (guess);
	return (_get_sqrt_(n, guess + 1));
}
