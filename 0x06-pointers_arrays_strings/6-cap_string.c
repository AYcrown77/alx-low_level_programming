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
 * cap_string - function that capitalizes all words of a string
 * @s - pointer to the string
 * Return: pointer to string(s)
 */
char *cap_string(char *s)
{
	int i, j, len1, len2;
	char punct[] = {' ', '\n', '\t', ',', ';', '.', '!', '?'};
	len1 = _strlen(s);
	len2 = _strlen(punct);

	for (i = 0; i < len1; i++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[0] = s[0] - 32;
		}
		for (j = 0; j < len2; j++)
		{
			if (s[i] != punct[j])
			{
				continue;
			}
			else
			{
				if(s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
	}
	return (s);
}
