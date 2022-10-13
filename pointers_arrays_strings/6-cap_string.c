#include "main.h"
/**
  * cap_string - capitalize all words of a string
  * @a: the pointer
  * Return: to the destination
  */
char *cap_string(char *a)
{
	int i = 0;

while (a[i] != '\0')
	{
	if (a[i] >= 'a' && a[i] <= 'z')
	{
	a[i] = a[i] - 32;
	}
	i++;
	}
	return (a);
}
