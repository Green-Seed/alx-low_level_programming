#include "main.h"
/**
 * print print_alphabet(void);
 * Description: prints the letters of the alphabet in lowercases
 * Return: 0
 */
void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);

		x++;
	}

	_putchar('\n');

}
