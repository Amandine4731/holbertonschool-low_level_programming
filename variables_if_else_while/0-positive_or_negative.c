#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	printf("%d is zero\n", n);
	/* 1st condition */
	else if (n < 0)
	printf("%d is negative\n", n);
	/* 2nd condition */
	else
	printf("%d is positive\n", n);
	/* other conditions */
	return (0);
}
