#include "main.h"

/**
 * _strlen - function that counts the lenght of a string
 * @s: the string argument passed
 * Return: lenght of string
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
 * _strncat - function that concatenates two strings to n bytes.
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be concatenated
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = _strlen(dest);
	for (i = 0; i < n; i++)
	{
		dest[len + i] = src[i];
	}
	return (dest);
}
