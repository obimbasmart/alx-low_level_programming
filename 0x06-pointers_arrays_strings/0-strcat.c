/**
 * _strcat - concatenate two strings
 * @src : the string to concatenate with
 * @dest : the destination the resulting string
 * Return: pointer to destination
 */
char *_strcat(char *dest, char *src)
{
    unsigned int id_dest, id_src;
    id_dest = 0;
    while (dest[id_dest] != '\0')
    {
        id_dest++;
    }
    id_src = 0;
    while (src[id_src] != '\0')
    {
        dest[id_dest + id_src] = src[id_src];
        id_src++;
    }
    dest[id_dest + id_src] = '\0';
    return (dest);
}
