#include "main.h"

/**
 * _strlen - counts the leght of a string
 * @s: string argument pased
 * Return: Nothing
 */
int _strlen(char *s)
{
	int count = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		count = count + 1;
		i++;
	}
	return (count);
}

void puts_half(char *str)
{
	int len, i, n;

	len = _strlen(str);
	n = len - 1 / 2;

	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
