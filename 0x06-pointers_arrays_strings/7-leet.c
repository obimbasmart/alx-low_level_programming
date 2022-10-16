/**
 * leet -  function that encodes a string into 1337.
 * @str : the character
 * Return: pointer to @str
 */
char *leet(char *str)
{
    char string_1[] = "AEOTL";
    char string_2[] = "aeotl";
    char string_3[] = "43071";
    int i, j;
    i = 0;
    while (str[i] != '\0')
    {
        j = 0;
        while (j < 5)
        {
            if (str[i] == string_1[j] || str[i] == string_2[j])
            {
                str[i] = string_3[j];
            }
            j++;
        }
        i++;
    }
    str[i] = '\0';
    return (str);
}
