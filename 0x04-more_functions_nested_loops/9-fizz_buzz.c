#include <stdio.h>
/**
*main - entry point
*Description: 1-100 for multiples of 3 fizz 5 buzz of both fizbuzz*
*Return: void
*/

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && 1 % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Buzz);
		}
		else
		{
			printf("%i", i);
		}
		if (i != 100)
		{
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
}

