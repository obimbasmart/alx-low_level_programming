#include <stdio.h>
/**
 * main - fizBuzz code task
 * Return: int : 0
 */
int main(void)
{
int num;
num = 1;
while (num < 101)
{
if (num % 3 == 0 && num % 5 == 0)
{
printf("FizzBuzz");
}
else if (num % 3 == 0)
{
printf("Fizz");
}
else if (num % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", num);
}
if (num != 100)
{
putchar('-');
}
num++;
}
putchar('\n');
return (0)
}
