#include <stdio.h>
/**
 * main - entry point
 * Des: prints abc(s) in lowercases except for q and e
 * Return: 0
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'e' && x != 'q')
			putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}
