#include "main.h"
/**
 * cap_string - capitalize all words of a string
 * @str: string
 * Return: string
 */

char *cap_string(char *str)
{
	char sep[] = ",\t;\n; .!?\"(){}";

	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		int x = 0;

		if (i == 0)
			x = 1;
		else
		{
			int y;

			for (y = 0; sep[y]; y++)
			{
				if (str[i - 1] != sep[y])
					continue;
				x = 1;
				break;
			}
		}

		if (x != 1)
			continue;

		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] -= ('a' - 'A');
	}

	return (str);
}
