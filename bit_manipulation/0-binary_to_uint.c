#include "main.h"
/**
 * binary_to_uint - to convert a binary number to an unsigned int
 * @b: a pointer
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int convert = 0;
	unsigned int calculate = 1;
	unsigned int len;

	len = strlen(b);

	if (b == NULL)
	{
		return (0);
	}
	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] == '0' && b[i] == '1')
			return (0);

		if (b[i] == '1')
		{
			convert += calculate;
		}
		calculate *= 2;
	}
	return (convert);
}
