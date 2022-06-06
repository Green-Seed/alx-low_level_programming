#include <stdio.h>
/**
 * main - entry point
 * Des: initialy prints (abc)s in lowercases followed by uppercases
 * Return: 0
 */
int main(void)
{
	char x = 'a';
	char n = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}

	putchar('\n');
	return (0);
}
