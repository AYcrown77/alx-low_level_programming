#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[argc - 2]) * atoi(argv[argc - 1]);
		printf("%d\n", mul);
	}
	return (0);
}
