#include <stdio.h>
/**
 * main - entry point
 * Des: Prints base 16 numbers in lowercase
 * Return: 0
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');

	for (y = 'a'; y <= 'f'; y++)
		putchar(y);

	putchar('\n');

	return (0);
}
