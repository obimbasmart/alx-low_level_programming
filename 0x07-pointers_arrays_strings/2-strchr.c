/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character
 * Return: pointer to @c
 */
char *_strchr(char *s, char c)
{
unsigned int idx;
idx = 0;
while (s[idx] != '\0')
{
if (s[idx] == c)
{
return (s + idx);
}
idx++;
}
if (s[idx] == '\0')
{
return (s + idx);
}
return (0);
}
