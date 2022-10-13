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

	for (; dest[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	src[i] = '\0';
	return (dest);
}
