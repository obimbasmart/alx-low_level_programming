#include <stdio.h>
#include "main.h"
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
