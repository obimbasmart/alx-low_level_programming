#include <stdlib.h>
/**
 * _calloc -  function allocates memory for an array of nmemb elements
 * of size bytes each and returns a pointer to the allocated memory.
 * @nmemb: the number of elements
 * @size: size of each element
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
return (ptr);
}
