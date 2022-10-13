#include <stdlib.h>
#include <string.h>
/**
 * argstostr -  function that concatenates all the arguments of your program
 * @ac: the number of argument passed
 * @av: vector of arguments
 * Return: pointer to string
 */
char *argstostr(int ac, char **av)
{
char *str;
int len, i, j, k;
if (ac == 0 || av == NULL)
{
return (NULL);
}
i = 0;
len = 0;
while (i < ac)
{
len += strlen(av[i]);
i++;
}
len += (ac - 1);
str = malloc(sizeof(char) * len);
i = 0;
k = 0;
while (i < ac)
{
j = 0;
while (av[i][j] != '\0')
{
str[j + k] = av[i][j];
j++;
}
str[j + k] = '\n';
k += j + 1;
i++;
}
return (str);
}
