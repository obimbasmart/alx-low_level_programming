#include <stdlib.h>
/**
 * create_array - create an array of chars
 * and initialize it with @c
 * @size: size of the arrayt
 * Return: int
 */
char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int i = 0;
if (size == 0)
{
ptr = 0;
return (ptr);
}
ptr = malloc(size * sizeof(char));
while (i < size)
{
ptr[i] = c;
i++;
}
return (ptr);
}



