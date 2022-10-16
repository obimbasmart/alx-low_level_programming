#include <stdio.h>
/**
 * print_diagsums -  prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: a 2-d square matrix of integers
 * @size: the size of the array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
    int idx, sumx, sumy;
    idx = 0;
    sumx = 0;
    sumy = 0;
    while (idx < size)
    {
        sumx += a[(idx *size) + idx];
        sumy += a[(idx + 1) * (size - 1)];
        idx++;
    }
    printf("%d, %d\n", sumx, sumy);
}
