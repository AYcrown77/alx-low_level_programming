#include "main.h" 

/**
 * check_prime - check if number is prime
 * @n: the number to be checked
 * @i: the iteration times
 * Return: 1 for prime or 0 for composite
 */
int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % i == 0 && i > 1)
	{
		return (0);
	}
	else if ((n / i) < i)
	{
		return (1);
	}
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number -  function that returns 1 if the input integer is a prime number
 * otherwise return 0
 * @n: argument passed
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
