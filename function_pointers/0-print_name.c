#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - to print a name
 * @name: the variable name
 * @f: a fonction char
 */
void print_name(char *name, void (*f)(char *))
{
	int i;

	if (name == NULL)
	{
		exit(0);
	}
	if (name)
	{
		for (i = 0; name[i] != '\0'; i--)
		{
			f(&name[i]);
		}
	}
}

