#include "main.h"
/**
 * _sqrt_recursion - get the square root of a number
 * @n: the number
 * Return: int
 */
int _sqrt_recursion(int n)
{
    if (n == 1 || n == 0)
    {
        return (n);
    }
    if (n < 0)
    {
        return (-1);
    }
    return (_get_sqr_root(n, 1));
}

/**
 * _get_sqr_root - get the square root of a number with guess
 * @n: the number
 * @guess: the guess
 * Return: int
 */
int _get_sqr_root(int n, int guess)
{
    if (guess == n / 2)
    {
        return (-1);
    }
    if (guess * guess == n)
    {
        return (guess);
    }
    return (_get_sqr_root(n, guess + 1));
}
