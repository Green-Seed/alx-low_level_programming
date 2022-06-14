#include "main.h"

/**
 * _strcpy - function prototype
 * @dest: pointer to the destination array from which to be coppied
 * @src: pointer to the string to be coppied
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; *(src + i) != '\0'; i++)
		dest[i] = *(src + i);

	dest[i] = '\0';

	return (dest);
}


