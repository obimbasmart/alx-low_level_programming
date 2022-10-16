/**
 * _strncat - concatenate two strings
 * @src : the string to concatenate with
 * @dest : the destination the resulting string
 * @n : the number of bytes to concatenate from src
 * Return: pointer to destination
 */
char *_strncat(char *dest, char *src, int n)
{
    int id_dest, id_src;
    id_dest = 0;
    while (dest[id_dest] != '\0')
    {
        id_dest++;
    }
    id_src = 0;
    while (id_src < n && src[id_src] != '\0')
    {
        dest[id_dest + id_src] = src[id_src];
        id_src++;
    }
    dest[id_dest + id_src] = '\0';
    return (dest);
}
