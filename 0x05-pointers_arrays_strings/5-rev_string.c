/**
 * rev_string - reverse a string
 * @str : the string
 * Return: void
 */
void rev_string(char *str)
{
int index_count;
int i;
char temp_var;
i = 0;
index_count = 0;
while (str[index_count] != '\0')
{
index_count++;
}
while (i < index_count / 2)
{
temp_var = str[i];
str[i] = str[index_count - 1 - i];
str[index_count - i - 1] = temp_var;
i++;
}
}
