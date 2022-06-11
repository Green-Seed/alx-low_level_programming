#include "main.h"
/**
 * print_line - Function parameter
 * Description: draws a straight line in the terminal
 *Return: 0
 */

void print_line(int n)
{

	int i = 0;

	while (i < n && n > 0)
	{
		putchar('_');
		i++;
	}
	_putchar('\n')
}
