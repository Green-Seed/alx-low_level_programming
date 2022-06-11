#include "main.h"
/**
 * _print_most_numbers - parameter
 * Description: prints numbers from 0-9 followed by a new line
 * Return: always 0
 */

void print_most_numbers(void)
{
	char n = 0;

	while (n <= 9)
	{
		if (n != 2 && n != 4)
		{
			_putchar('0' + n);
		}
		n++;
	}
	_putchar('\n');
}
		
