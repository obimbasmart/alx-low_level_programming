/**
 * _strncpy - copy string from source to destination
 * @src : the source
 * @dest : the destination
 * @n : number of bytes to copy
 * Return: pointer to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
    int idx;
    idx = 0;
    while (idx < n && src[idx] != '\0')
    {
        dest[idx] = src[idx];
        idx++;
    }
    while (idx < n)
    {
        dest[idx] = '\0';
        idx++;
    }
    return (dest);
}

