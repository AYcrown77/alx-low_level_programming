#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: unknown args
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list ap;
	va_start(ap, n);
	for (i = 1; i <= n; i++)
	{
		s = va_arg(ap, char *);
		if (s != NULL)
		{
			printf("%s", s);
		}
		if (i < n && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
