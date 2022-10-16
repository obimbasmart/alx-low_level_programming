/**
 * swap_int - swap the value of two ints
 * @a : the first num
 * @b : the second num
 * Return: void
 */
void swap_int(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
