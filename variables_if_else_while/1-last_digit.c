#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 5)
	printf("Last digit of %d and is greater than 5\n", n);
	/* 1st condition */

	else if ((n < 6) || (n != 0))
	printf("Last digit of %d and is less than 6 and not 0\n", n);
	/* 2nd condition */
	
	else 
	printf("Last digit of %d and is 0\n", n);
	/* other conditions */
	
	return (0);
}

