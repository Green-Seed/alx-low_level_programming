#include "main.h"
#include <string.h>

/**
 *puts2 - prints characters of a string followed by a new line
 *@str: string parameter
 */

void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i + 0; i < len; += 2)
		_putchar(str[i]);
	_putchar('\n');
}
