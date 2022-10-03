/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character
 * Return: pointer to @c
 */
char *_strchr(char *s, char c)
{
char *ptr = 0;
unsigned int idx;
idx = 0;
char check;
while (s[idx] != '\0')
{
check = s[idx];
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
