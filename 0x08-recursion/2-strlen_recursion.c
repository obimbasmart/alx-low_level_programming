/**
 * _strlen_recursion - get the length of a string
 * @s: the string
 * Return: int
 */
unsigned int _strlen_recursion(char *s)
{
    unsigned int idx;
    idx = 0;
    if (s[idx] ==  '\0')
    {
        return (0);
    }
    return (1 + _strlen_recursion(&s[idx + 1]));
}


