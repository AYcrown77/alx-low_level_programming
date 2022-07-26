#include "main.h"

/**
 * main - copies data from one file to another
 * @argc: number of args
 * @argv: args vector
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int fddest, fdsrc, readval, writeval;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fddest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fddest == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	fdsrc = open(argv[1], O_RDONLY);
	if (fdsrc == -1)
	{
		dprintf(2, " Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	do {
		readval = read(fdsrc, buffer, 1024);
		if (readval == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		writeval = write(fddest, buffer, readval);
		if (writeval == -1 || writeval != readval)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	} while (writeval == 1024);

	if (close(fddest))
	{
		dprintf(2, "Error: Can't close fd %d\n", fdsrc);
	}
	if (close(fddest))
	{
		dprintf(2, "Error: Can't close fd %d\n", fddest);
		exit(100);
	}
	return (0);
}
