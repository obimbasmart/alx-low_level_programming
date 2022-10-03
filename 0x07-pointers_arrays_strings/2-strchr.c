/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character
 * Return: pointer to @c
 */
char *_strchr(char *s, char c)
{
char *ptr;
unsigned int idx;
ptr = 0;
idx = 0;
while (s[idx] != '\0')
{
if (s[idx] == c)
{
ptr = &(s[idx]);
return (ptr);
}
idx++;
}
if (s[idx] == '\0')
{
ptr = &(s[idx]);
return (ptr);
}
return (ptr);
}
