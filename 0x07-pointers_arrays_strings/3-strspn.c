/**
 * _strspn - gets the length of a prefix substring
 * @s : the string to scan
 * @accept : the prefix
 * Return: unsigned int : number of chars
 */
unsigned int _strspn(char *s, char *accept)
{
int idx, idxx;
unsigned int counter;
idx, counter = 0;
while (s[idx] != '\0')
{
idxx = 0;
while (accept[idxx] != '\0')
{
if (s[idx] == accept[idxx])
{
counter++;
break;
}
idxx++;
}
if (accept[idxx] == '\0')
{
return (counter);
}
idx++;
}
return (counter);
}
