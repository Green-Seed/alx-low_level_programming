#include <stdio.h>
/**
 * main - entry point
 * Des: prints single base 10 numbers from 0
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(48 + x);
		x++;
	}

	putchar('\n');
	return (0);
}
