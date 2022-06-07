#include "main.h"

/**
 * times_table - prints times table
 *
 * Return: void
 *
 */
void times_table(void)
{
	int i,j;

	for (i = '1'; i <= 10; i++)
	{
		for (j = '1'; j <= 10; j++)
		{
			int m = 0, n = 0;
			m = n * i;
			_putchar(m);
			if (j != 10)
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
