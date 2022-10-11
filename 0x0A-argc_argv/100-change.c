#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - sum and print all the digits passed to a program
 * @argc: the command line argument count
 * @argv: the command line argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
int count, i, num;
int arr[5] = {25, 10, 5, 2, 1};
count = 0;
i = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
while (i < 5)
{
num = atoi(argv[1]);
if (num <= 0)
{
printf("%d\n", count);
return (0);
}
if (num % arr[i] == 0)
{
printf("%d\n", num / arr[i]);
return (0);
}
if (num > arr[i])
{
count += (num / arr[i]) + get_coin(num % arr[i], arr, i + 1);
printf("%d\n", count);
return (0);
}
i++;
}
printf("%d", count);
return (0);
}

/**
 * get_coin - get minimum number of coins to make change for an amount of money
 * @num: the amount of money
 * @arr: array of possible coins
 * @start: where to start checking for modulus
 * Return: 0 if false, 1 if true
 */
int get_coin(int num, int *arr, int start)
{
while (start < 5)
{
if (num % arr[start] == 0)
{
return (num / arr[start]);
}
if (num > arr[start])
{
return ((num / arr[start]) + get_coin(num % arr[start], arr, start + 1));
}
start++;
}
return (0);
}
