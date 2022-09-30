/**
 * reverse_array - that's just it
 * @a : the array
 * @n : the numer of elements in the array
 * Return : void
 */
void *reverse_array(int *a, int n)
{
int temp_var, i;
i = 0;
while (i < (n / 2))
{
temp_var = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp_var;
i++;
}
}


