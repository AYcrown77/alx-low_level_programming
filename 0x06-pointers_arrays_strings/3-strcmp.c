#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: the difference between the string
 */
int _strcmp(char *s1, char *s2)
{
	int i, diff;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else if (s1[i] == s2[i])
		{
			diff = 0;
		}
	}
	return (diff);
}
