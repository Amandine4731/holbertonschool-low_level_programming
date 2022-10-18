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
	int n = 0;

	while (dest[n] != '\0')
	{
		n++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
	dest[n + i] = src[i];
	}
	dest[n + i] = '\0';
	return (dest);
}
