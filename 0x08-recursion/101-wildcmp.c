#include "main.h"

/**
 * wildcmp - check if strings can be considered identical
 * @s1: first string
 * @s2: second string
 * Return: int
 */
int wildcmp(char *s1, char *s2)
{
	int i, j;

	i = j = 0;
	while (s1[i] != '\0' || s2[j] != '\0')
	{
		if (s2[j] == '*')
		{
			while (s2[j] == '*')
				j++;
			s2 = s2 + j; /* remove initial chars after wildcard */
			while (s1[i] != s2[0])
				i++;
			s1 = s1 + i;
			return (wildcmp(s1, s2));
		}
		if (s1[i] != s2[j])
			return (0);
		i++;
		j++;
	}
	if (s1[i] != s2[j]) /* different lenght */
		return (0);
	return (1);
}
