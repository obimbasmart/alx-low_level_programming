#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - print every minute of the day of Jack Bauer
 * Return: void
 */
void jack_bauer(void)
{
for (int hour = 0; hour <= 24; hour++)
{
for (int minute = 0; minute <= 59; minute++)
{
putchar(hour /10 + '0');
putchar(hour %10 + '0');
putchar(':');
putchar(minute /10 + '0');
putchar(minute %10 + '0');
putchar('\n');
}
}			
}
