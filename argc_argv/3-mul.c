#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: arguments count
 * @argv: arguments values
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		(void) argc;

		a = atoi(argv[1]);
		b = atoi(argv[2]);

		printf("%d\n", a * b);
	}
	return (0);
}
