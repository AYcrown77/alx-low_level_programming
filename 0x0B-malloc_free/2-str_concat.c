#include "main.h"
#include <stdlib.h>


/**
 * _strlen - Returns the length of a string.
 * @str: The string to get the length of.
 *
 * Return: The length of @str.
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);

	ptr = (char *) malloc(sizeof(char) * (len1 + len2) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		ptr[len1 + j] = s2[j];
	}
	return (ptr);
}
