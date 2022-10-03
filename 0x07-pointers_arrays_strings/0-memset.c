/**
 * _memset - fills memory with constant byte
 * @s : the string in memory
 * @b : the character to fill with
 * @n : the first n bytes
 * Return: pointer to @s
 */
char *_memset(char *s, char b, unsigned int n)
{
int idx;
idx = 0;
while (idx < n)
{
*(s + idx) = b;
idx++;
}
return (s);
}
