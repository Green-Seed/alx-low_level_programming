#include "main.h"
/**
 * _isdigit - Function prototype
 * Description: checks  for the digit 0 through 9
 * @c: integer parameter
 * Return: always 0
 */

int _isdigit(int c)
{
	int is_digit = c >= 48 && c <= 57 ? 1 : 0;
	return (is_digit);
}
