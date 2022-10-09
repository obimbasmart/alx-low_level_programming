#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: the number
 * Return: int
 */
int is_prime_number(int n)
{
if (n == 1 || n == 0 || n < 0)
{
return (0);
}
if (n == 2)
{
return (1);
}
return (_check_prime(n, 2));
}

/**
 * _check_prime - returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: the number
 * Return: int
 */
int _check_prime(int n, int i)
{
if (n % i == 0)
{
return (0);
}
if (i == n / 2)
{
return (1);
}
return (1 * (_check_prime(n, i + 1)));
}

