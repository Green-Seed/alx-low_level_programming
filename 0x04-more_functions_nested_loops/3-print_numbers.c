#include "main.h"
/**
 * _print_numbers - function that prints the numbers 0-9 proceeded by a new line
 * Return: always 0
 */

void print_numbers(void)
{
	char x = 0;
	while (x <= 9)
	{
		_putchar('0' + x);
		x++;
	}
	_putchar('\n')
}
		
