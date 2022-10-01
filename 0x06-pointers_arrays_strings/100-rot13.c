/**
 * rot13 -  function that encodes a string into rot13.
 * @str : the string
 * Return: pointer to @str
 */
char *rot13(char *str)
{
int idx, idxx;
char ch;
char original_str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char roted_str[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
idx = 0;
while (str[idx] != '\0')
{
ch = str[idx];
idxx = 0;
while (idxx < 54)
{
if (((ch >= 'A' && ch <= 'Z') ||
(ch >= 'a' && ch <= 'z')) && ch == original_str[idxx])
{
str[idx] = roted_str[idxx];
}
idxx++;
}
idx++;
}
str[idx] = '\0';
return (str);
}
