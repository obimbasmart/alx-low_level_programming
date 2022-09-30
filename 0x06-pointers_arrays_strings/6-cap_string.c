#include "main.h"
/**
 * cap_string - convert all lowercase to uppercase
 * @str : the string
 * Return: pointer to @str
 */
char *cap_string(char *str)
{
int idx;
idx = 0;
while (str[idx] != '\0')
{
if (str[idx] > 96 && str[idx] < 123)
{
if (idx == 0)
{
str[idx] = str[idx] -32;
continue;
}
if (is_seperator(str[idx - 1]))
{
str[idx] = str[idx] - 32;
}
}
idx++;
}
str[idx] = '\0';
return (str);
}
/**
 * is_seperator - check if a char is a valid seperator
 * @ch : the character
 * Return: 0:false, 1:true
 */
int is_seperator(int ch)
{
if (ch == '.' ||
ch == ';' ||
ch == ',' ||
ch == '!' ||
ch == '?' ||
ch == '"' ||
ch == '(' ||
ch == ')' ||
ch == '{' ||
ch == '}' ||
ch == ' ' ||
ch == '\t' ||
ch == '\n')
{
return (1);
}
return (0);
}
