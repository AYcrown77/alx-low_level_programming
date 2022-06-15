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

/**
 * rev_string - prints a reverse of a string
 * @s: string argument to be reversed
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len, k = 0, i;

	len = _strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		k = s[i];
		s[i] = s[len - 1 - i];
		s[len - i - 1] = k;
	}
}
