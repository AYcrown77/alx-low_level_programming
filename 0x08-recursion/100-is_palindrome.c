#include "main.h"

/**
 * _strlen_recursion - get the length of a string
 * @s: the string to get the length
 * Return: the string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}

/**
 * check_palindrome - check if a string is a palindrome
 * @s: the string value to be checked
 * Return: integer value
 */
int check_palindrome(char *s)
{
	int l = _strlen_recursion(s) - 1;

	if (*s == s[l])
	{
		s++;
		l--;
	}
	else
	{
		return (0);
	}
	return (1);
}

/**
 * is_palindrome - function that checks if string is palindrome or not
 * @s: the string to be checked
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '0')
	{
		return (1);
	}
	return  (check_palindrome(s));
}
