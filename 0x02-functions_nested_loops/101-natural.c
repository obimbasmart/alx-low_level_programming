#include <stdio.h>
#include "main.h"
/**
* main - computes and prints the sum of all
* the multiples of 3 or 5 below 1024 (excluded)
* Return: 0
*/
int main(void)
{
int i, sum;
sum = 0;
i = 0;
while (i < 1024)
{
if (_ismultiple(i))
{
sum += i;
}
i++;
}
printf("%d\n", sum);
return (0);
}
/**
* _ismultiple - check if a number is a multiple of 3 or 5
* @n : the number to check
* Return: true or false
*/
int _ismultiple(int n)
{
if (n % 3 == 0 || n % 5 == 0)
{
return (1);
}
return (0);
}
