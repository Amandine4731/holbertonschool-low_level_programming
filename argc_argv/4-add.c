#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: arguments count
 * @argv: arguments values
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int i, n, a;
	int result = 0;

	if (argc == 1)
	{
		return (0);
	}
	/* test*/
	for (i = 1; i < argc; i++)
	{
		for (n = 0; argv[i][n] != '\0'; n++)
		{
			if (argc > 0 && (argv[i][n] >= 48 && argv[i][n] <= 57))
			{
				continue;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	/* end of the test */
	for (i = 1; i < argc; i++)
	{
		a = atoi(argv[i]);
		result = result + a;
	}
	printf("%d\n", result);
	return (0);
}
