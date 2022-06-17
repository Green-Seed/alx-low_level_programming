#include "main.h"

/**
 *  _strcat - concatenates two strings
 * @src: source of string
 * @dest: destination of string
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	int i = -1;
	int x;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}

	do {
		i++;
		dest[x] = src[i];
		x++;
	} while (src[i] != '\0');

	return (dest);
}

