#include "holberton.h"

int main(void)
{
	char *lin = NULL;
	size_t leng = 0;

	printf("$ ");
	while (getline(&lin, &leng, stdin) != -1)
	{
		print_matriz(lin);
	printf("$ ");
	}
	free(lin);
}
