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

	while (src[i] != '\0')
	{
		n++;
	for (; dest[n] != '\0'; n++)
	{
		dest[n] = src[i];
	}
}
	dest[n] = '\0';
	return (dest);
}
