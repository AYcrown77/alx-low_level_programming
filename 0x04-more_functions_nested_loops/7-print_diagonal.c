#include "main.h"

/**
 * print_diagonal - prints diagonal lines
 * @n: the argument passed
 * Return: Nothing
 *
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i =  1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j < i)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('\\');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
