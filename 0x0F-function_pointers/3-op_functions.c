#include "3-calc.h"

/**
 * op_add - sums a and b
 * @a: first value
 * @b: second value
 * Return: sum of two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subs a from b
 * @a: first value
 * @b: second value
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - muls a and b
 * @a: first value
 * @b: second value
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: first value
 * @b: second value
 * Return: the result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod -  gives the remainder of a by b
 * @a: first value
 * @b: second value
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
