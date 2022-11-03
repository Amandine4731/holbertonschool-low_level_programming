#include "3-calc.h"
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: name of arguments
 * Return: the funtion
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*f)(int, int);

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (f == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", f(a, b));
	return (0);
}
