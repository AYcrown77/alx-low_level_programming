#include "main.h"

/**
 * print_rev - prints strings in reverse
 * @s: string argument pased
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len, i;

	/* calling _strlen() */
	len = _strlen(s);
	i = len;

	while (s[i] >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
