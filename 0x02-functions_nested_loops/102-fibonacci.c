#include <stdio.h>
#include "main.h"
/**
* main - print the first 100 fibonacci numbers
* Return: 0
*/
int main(void)
{
unsigned long long int next;
unsigned long long int fn;
unsigned long long int fn_1;
int i;
fn = 1;
fn_1 = 2;
printf("%d, %d, ", fn, fn_1);
for (i = 0; i < 98; i++)
{
next = fn + fn_1;
fn = fn_1;
fn_1 = next;
if (i != 97)
{
printf("%llu, ", next);
}
else
{
printf("%llu", next);
}
}
putchar('\n');
return (0);
}
