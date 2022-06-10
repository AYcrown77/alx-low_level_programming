#include "main.h"

/**
 * print_line - prints lines
 * @n: argument passed
 * Return: Nothing
 *
 */
void print_line(int n)
{
	int i = 1;

	if (i > 0)
	{
		for (; i <= n; i++)
		{
			_putchar('-');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
