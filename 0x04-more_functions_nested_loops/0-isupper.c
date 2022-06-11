#include "main.h"
/**
 *_isupper - Function prototype
 * Description: a function that checks for uppercase characters
 * @c: an integer
 * Return: always 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
