/**
 * create_array - create an array of chars
 * and initialize it with @c
 * @size: size of the arrayt
 * Return: int
 */
char *create_array(unsigned int size, char c)
{
char *ptr;
int i = 0;
ptr = malloc(size * sizeof(char));
while (i < size)
{
ptr[0] = c;
i++;
}
return (ptr);
}
