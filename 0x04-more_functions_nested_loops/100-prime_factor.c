#include <stdio.h>
#include "main.h"
int main(void)

/**
 * main - print the largest prime factor of a num
 * @num : the number
 * Return: 0
 */
{
    printf("%lu\n", get_highest_prime_factor(612852475143));
    return (0);
}

/**
 * get_highest_prime_factor - that's it
 * @num : the number to get its ...
 * Return: int
 */
unsigned long int get_highest_prime_factor(unsigned long int num)
{
    unsigned long int highest_prime_factor;
    unsigned long int n;
    n = 1;
    while (n < num)
    {
        if (num % n == 0 && _isprime(n))
        {
            highest_prime_factor = n;
        }
        n++;
    }
    return (highest_prime_factor);
}

/**
 * _isprime - check if a number is prime
 * @num : the number
 * Return: 1 if true; 0 if false
 */
int _isprime(unsigned long int num)
{
    unsigned long int factorCount;
    unsigned long int n;
    factorCount = 2, n = 2;
    while (n < num)
    {
        if (num % n == 0)
        {
            factorCount++;
        }
        n++;
    }
    return (factorCount == 2);
}
