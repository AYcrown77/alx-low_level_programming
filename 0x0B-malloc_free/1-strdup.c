#include "main.h"
#include <stdlib.h>

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
 * _strdup -  function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: pointer to the string passed as parameter
 * Return: returns a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, len;

	len = _strlen(str);
	ptr = (char *) malloc(sizeof(char) * len + 1);

	if (ptr == NULL || str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
