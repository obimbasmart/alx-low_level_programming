/**
 * print_chessboard - function prints chessboard
 * @a : a 2-d array representing the board
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
unsigned int idx, idy;
idx = 0;
while (idx < 8)
{
idy = 0;
while (idy < 8)
{
putchar(a[idx][idy]);
idy++;
}
putchar('\n');
idx++;
}
}


