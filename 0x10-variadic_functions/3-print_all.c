#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list mylist;
	int i = 0, n = 0;
	char *sep = ", ";
	char *str;

	va_start(mylist, format);

	while (format && format[n])
	{
		if (n == (i - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
			case 'c':
				printf("%c%s", va_arg(mylist, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(mylist, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(mylist, double), sep);
				break;
			case 's':
				str = va_arg(mylist, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
		}
		n++;
	}
	printf("\n");
	va_end(my_list);
}

