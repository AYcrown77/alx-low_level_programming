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
 * _strcpy -  function that copies the string pointed to by src
 * @dest: strings destination
 * @src: string source
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = _strlen(src);
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
