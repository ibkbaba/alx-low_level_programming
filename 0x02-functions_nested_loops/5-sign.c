#include "main.h"

/**
 *print_sign-print signs
 * @n:Returns 1 and prints + if n is greater than zero
 * Return:1 0 -1
 */
int print_sign(int n)
{
	if (n < 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
