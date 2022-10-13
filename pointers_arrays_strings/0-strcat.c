#include "main.h"
/**
  * _strcat - add and copy strings pointed
  * @dest: the receiver
  * @src: the giver
  * Return: to the receiver
  */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	for (; src[i]; i++)
	{
	dest[i] = src[i] + dest[i];
	}
	dest[i] = '\0';
	return (dest);
}
