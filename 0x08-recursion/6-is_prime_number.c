#include "main.h"

/**
 * is_prime_number - return 1 if a number is prime
 * @n: integer number
 * Return: integer
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_is_prime(n, 2));
}

/**
 * _is_prime - check if number is a prime recursively
 * @n: integer number
 * @fact: possible factor
 * Return: int
 */
int _is_prime(int n, int fact)
{
	if (n == fact)
		return (1);
	if (n % fact != 0)
		return (_is_prime(n, fact + 1));
	else
		return (0);
}

