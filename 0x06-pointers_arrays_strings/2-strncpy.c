#include "main.h"
#include <string.h>

/**
 * _strncpy - coppies a string
 * @dest: destination
 * @src: source
 * @n: string
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
