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
	int i, n;
	for (n = 1; n <= 10; n++) {
	for (i = n;;) {
	if (i / 10 % 10 > i % 10) break;
	if ((i /= 10) == 0) { printf("%d\n", n); break; }
}
}
}
}
