#include "main.h"

/**
 * print_last_digit - prints the last digit of a given number
 * @x: argument passed
 * Return: returns y
 *
 */
int print_last_digit(int x)
{
	if (x >= 0)
	{
		x = x % 10;
		_putchar('0' + x);
	}
	else
	{
		x = x * -1;
		x = x % 10;
		_putchar('0' + x);
	}
	return (x);
}
