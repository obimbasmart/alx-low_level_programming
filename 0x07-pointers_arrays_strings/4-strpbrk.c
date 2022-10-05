/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s : the string to scan
 * @accept : the search term
 * Return: pointer to first @accept of accept in @s
 */
char *_strpbrk(char *s, char *accept)
{
int idx, idxx;
char *ptr;
idx = 0;
ptr = 0;
while (s[idx] != '\0')

{
idxx = 0;
while (accept[idxx] != '\0')
{
if (s[idx] == accept[idxx])
{
ptr = &s[idx];
return (ptr);
}
idxx++;
}
idx++;
}
return (ptr);
}


