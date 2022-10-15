#include <stdlib.h>
/**
 * string_nconcat -   function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s1_s2;
int len1, len2, i, j;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
len1 = strlen(s1);
len2 = strlen(s2);
if (n < len2)
{
len2 = n;
}
s1_s2 = malloc(sizeof((*s1_s2) *(len1 + len2)) + 1);
if (s1_s2 == NULL)
{
return (NULL);
}
i = 0;
while (s1[i] != '\0')
{
s1_s2[i] = s1[i];
i++;
}
j = i;
i = 0;
while (i < len2)
{
s1_s2[i + j] = s2[i];
i++;
s1_s2[i + j] = '\0';
return (s1_s2);
}
