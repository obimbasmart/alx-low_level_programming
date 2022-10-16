/**
 * _strstr - finds the first occurrence of the substring
 * needle in the string haystack.
 * @haystack: the string to scan
 * @needle : the search term
 * Return: pointer to first @accept of accept in @s
 */
char *_strstr(char *haystack, char *needle)
{
    int idx, idxx, is_substring;
    char *ptr;
    idx = 0;
    ptr = 0;
    is_substring = 0;
    if (needle[0] == '\0')
    {
        ptr = &haystack[0];
        return (ptr);
    }
    while (haystack[idx] != '\0')
    {
        idxx = 0;
        while (needle[idxx] != '\0')
        {
            if (needle[idxx] != haystack[idx + idxx])
            {
                is_substring = 0;
                break;
            }
            else
            {
                is_substring = 1;
            }
            idxx++;
        }
        if (is_substring)
        {
            ptr = &haystack[idx];
            return (ptr);
        }
        idx++;
    }
    return (ptr);
}
