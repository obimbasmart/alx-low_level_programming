#include "main.h"

/**
 * str_concat - concatenate two strings
 * @s1: string1
 * @s2: string2
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, id1, id2;
	char *s1_s2;

	len1 = len2 = 0;

	len1 = s1 ? strlen(s1) : 0;
	len2 = s2 ? strlen(s2) : 0;

	s1_s2 = malloc((sizeof(char) * (len1 + len2)) + 1);

	for (id1 = 0; id1 < len1; id1++)
		s1_s2[id1] = s1[id1];

	for (id2 = 0; id2 < len2; id2++)
		s1_s2[id1 + id2] = s2[id2];

	s1_s2[id1 + id2] = '\0';

	return (s1_s2);
}


