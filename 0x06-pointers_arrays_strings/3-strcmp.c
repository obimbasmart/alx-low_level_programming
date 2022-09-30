/**
 * _strcmp - compare two strings
 * if s1 > s2 : 1 else if s2 > s1 : -1 else: 0
 * @s1 : the source
 * @s2 : the destination
 * Return: 0, -1, 1
 */
int _strcmp(char *s1, char *s2)
{
int idx;
idx = 0;
while (s1[idx] != '\0' || s2[idx] != '\0')
{
if (s1[idx] > s2[idx])
{
return (1);
}
else if (s1[idx] < s2[idx])
{
return (-1);
}
idx++;
}
if (s1[idx - 1] == s2[idx - 1])
{
return (0);
}
}
