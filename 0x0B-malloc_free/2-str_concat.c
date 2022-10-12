#include <stdlib.h>
#include <string.h>
/**
* str_concat - concatenate two strings
* @s1: first string
* @s2: second string
* Return: pointer
*/
char *str_concat(char *s1, char *s2)
{
char *s1_s2;
int len_1, len_2, i, j;
len_1 = strlen(s1);
len_2 = strlen(s2);
s1_s2 = malloc(sizeof(char) * (1 + len_1 + len_2));
if (!s1_s2)
{
return (NULL);
}
i = 0;
while (i < len_1)
{
s1_s2[i] = s1[i];
i++;
}
j = i;
i = 0;
while (i < len_2)
{
s1_s2[j + i] = s2[i];
i++;
}
s1_s2[j + i] = '\0';
return (s1_s2);
}
