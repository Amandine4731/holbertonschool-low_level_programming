#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %ld bytes\n",sizeof(charType));
	printf("Size of int: %ld bytes\n",sizeof(integerType));
	printf("Size of long int: %ld bytes\n",sizeof(integerType));
	printf("Size of long long int: %ld bytes\n",sizeof(integerType));
	printf("Size of float: %ld bytes\n",sizeof(floatType));
	return (0);
}
