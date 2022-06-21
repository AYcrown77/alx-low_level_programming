#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string
 * @s: pointer to the string
 * @c: character to be found
 * Return: a pointer to the first occurrence of the character c in the string s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			s = s + i;
			return (s);
		}
	}
	return (NULL);
}
