#include <stdio.h>
#include <time.h>
/**
 * main - entry point
 * Des: Prints reversed abc(s) in lowercases
 * Return (0)
 */
int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}

	putchar('\n');
	return (0);
}
