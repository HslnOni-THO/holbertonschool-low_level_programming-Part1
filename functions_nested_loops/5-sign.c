#include "main.h"
/**
 * _sign - prints the sign of a number
 * @n: The character to check
 *
 * Description: Prints a quote using the puts function
 * Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
			return (-1);
	}
	if (n > 0)
	{
		_putchar('+');
			return (1);
	}
	if (n == 0)
	{
		_putchar('0');
			return (0);
	}
	return (0);
}
