#include "main.h"

/**
 * times_table - prints times table
 *
 * Return: void
 *
 */
void times_table(void)
{
	int i, j, m = 0, n = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			m = n * i;
			if (m > 9)
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
			else 
			{
				_putchar(m + '0');
			}

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				n++;
			}
		}
		_putchar('\n');
	}
}
