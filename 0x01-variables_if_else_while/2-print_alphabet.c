#include <stdio.h>
/**
 * main - program entry point
 * Des: prints lower cassed letters of the alphabet
 * Return: 0
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);

		x++;
	}

	putchar('\n');
	return (0);
}
