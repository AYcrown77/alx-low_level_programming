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
 * leet - function that encodes a string into 1337
 * @s: string function passed
 * Return: modified string (s)
 */
char *leet(char *s)
{
	int i, j, len1, len2, temp;
	char alp[] = {'a', 'e', 'o', 't', 'l'};
	int num[] = {'4', '3', '0', '7', '1'};

	len1 = _strlen(s);
	len2 = _strlen(alp);

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (s[i] != alp[j] && s[i] != (alp[j] - 32))
			{
				continue;
			}
			temp = num[j];
			s[i] = temp;
		}
	}
	return (s);
}
