#include <stdio.h>
/**
 * _strcpy - copy string from source to destination
 * @src : the string
 * @dest : the destination
 * Return: pointer to destination
 */
char _strcpy(char *dest, char *src)
{
unsigned int idx;
idx = 0;
while (src[idx] != '\0')
{
dest[idx] = src[idx];
idx++;
}
return (dest);
}


