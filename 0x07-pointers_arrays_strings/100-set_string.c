#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: pointer to the pointer of the first string
 * @to: pointer to the string to be modified
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
