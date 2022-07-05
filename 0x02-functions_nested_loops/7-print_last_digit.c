#include "main.h"

/**
 *print_last_digit-print the last digit of a number
 *@n:digit
 *Return:the value of last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	return (n % 10);
