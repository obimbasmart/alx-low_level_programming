/**
 * string_toupper - convert all lowercase to uppercase
 * @str : the string
 * Return : pointer to @str
 */
char *string_toupper(char *str)
{
int idx;
idx = 0;
while (str[idx] != '\0')
{
if (str[idx] > 96 && str[idx] < 123)
{
str[idx] = str[idx] - 32;
}
idx++;
}
str[idx] = '\0';
return (str);
}
