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

	while (src[n] != '\0')
	{
		n++;
	while (dest[i] != '\0')
	{
		i++;
	}
	dest[i] = src[n];
}
	dest[i] = '\0';
	return (dest);
}
