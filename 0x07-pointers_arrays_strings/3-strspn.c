#include "main.h"

/**
 * _strspn -  function that gets the length of a prefix substring
 * @s: pointer to first string
 * @accept: pointer to second string
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, n = 0;

	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n = n + 1;
			}
		}
	}
	return (n);
}
