#include "holberton.h"

void print_matriz(char *av)
{
	int ct = 0;

	while (av[ct] != '\0')
	{
		putchar(av[ct++]);
	}
}
