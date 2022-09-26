#include <stdio.h>
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
