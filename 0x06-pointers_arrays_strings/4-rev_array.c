#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: pointer for an array
 * @n: array
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int x;

	for (x = n / 2; x > 0; x--, i++)
	{
		a[n - i - 1] += a[i];
		a[i] = a[n - i - 1] - a[i];
		a[n - i - 1] -= a[i];
	}
}

