/**
 * _strlen - return the lenght of a string
 * @str : the string
 * Return: integer
 */
int _strlen(char *str)
{
    unsigned int index_count;
    index_count = 0;
    while (str[index_count] != '\0')
    {
        index_count++;
    }
    return (index_count);
}
