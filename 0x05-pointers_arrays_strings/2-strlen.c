#include "main.h"
/**
 *_strlen - function that returns the length of a string
 *@s: length of a string
 *Return: 0
 */

int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (len);
}	
