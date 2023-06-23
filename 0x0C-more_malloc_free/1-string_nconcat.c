#include "main.h"

/**
 * string_nconcat - concatenate two string1 with first n chars of s2
 * @s1: string1
 * @s2: string2
 * @n: the first n chars of s2
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, id1, id2;
	char *s1_s2;

	len1 = len2 = 0;

	len1 = s1 ? strlen(s1) : 0;
	len2 = s2 ? strlen(s2) : 0;

	/* if n is greater or equals lenght of s2 */
	/* then use the entire string */
	if (n >= len2)
		n = len2;

	s1_s2 = malloc((sizeof(char) * (len1 + n)) + 1);
	if (!s1_s2)
		return (NULL);

	for (id1 = 0; id1 < len1; id1++)
		s1_s2[id1] = s1[id1];

	for (id2 = 0; id2 < n; id2++)
		s1_s2[id1 + id2] = s2[id2];

	s1_s2[id1 + id2] = '\0';

	return (s1_s2);
}


