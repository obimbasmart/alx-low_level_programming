#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - function that prints anything
 * @format: the string formats to use
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	/* initialize vars */
	va_list str_list;
	int i;
	char *next_str;
	char *sep;

	va_start(str_list, format);
	i = 0;
	while (format[i] != '\0')
	{
		sep = ", ";
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(str_list, int));
				break;
			case 'i':
				printf("%d", va_arg(str_list, int));
				break;
			case 'f':
				printf("%f", va_arg(str_list, double));
				break;
			case 's':
				next_str = va_arg(str_list, char *);
				printf("%s", next_str == NULL ? "(nil)" : next_str);
				break;
			default:
				sep = "";
				break;
		}
		i++;
		if (format[i] != '\0')
		{
			printf("%s", sep);
		}
	}
	va_end(str_list);
	printf("\n");
}




