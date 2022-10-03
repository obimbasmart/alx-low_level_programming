/**
 * _memset - copy n byte from @src to @dest
 * @src : the source
 * @dest : the destination
 * @n : the first n bytes
 * Return: pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int idx;
idx = 0;
while (idx < n)
{
*(dest + idx) = *(src + idx);
idx++;
}
return (dest);
}
