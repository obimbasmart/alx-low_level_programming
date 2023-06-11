#include "main.h"

/**
 * main - ./change cents
 * @argc: length of argv
 * @argv: array of params
 * Return: int
 */
int main(int argc, char *argv[])
{
	int total_coins, cents, idx;
	int valid_denoms[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(valid_denoms) / sizeof(valid_denoms[0]);

	if (argc > 2 || argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	total_coins = 0;
	argv++; /* move to second arg */
	cents = atoi(*argv);

	if (cents < 0)
		printf("%d\n", 0);

	for (idx = 0; idx < num_coins; idx++)
	{
		total_coins += cents / valid_denoms[idx];
		cents = cents % valid_denoms[idx];
	}
	printf("%d\n", total_coins);
	return (EXIT_SUCCESS);
}

