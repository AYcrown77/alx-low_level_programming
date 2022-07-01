#include "main.h"
#include <stdlib.h>

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
 * string_nconcat -  function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: n bytes from s2
 * Return: pointer shall point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, len1, len2;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n > len2 || n == len2)
	{
		n = len2;
	}
	ptr = malloc(sizeof(char) * len1 + n + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ptr[len1 + j] = s2[j];
	}
	ptr[i + j] = '\0';

	return (ptr);
}
