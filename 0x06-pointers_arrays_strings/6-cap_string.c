#include "main.h"

/**
 * cap_string-function that capitalizes all words of a string.
 * @str: string to capitalise
 * Return:capital string
 */

char *cap_string(char *str)
{
	int x = 0;

	{
		while (!(str[++x] >= 'a' && str[x] <= 'z'))
			x++;
		if (str[x - 1] == ' ' ||
		str[x - 1] == '\t' ||
		str[x - 1] == '\n' ||
		str[x - 1] == ',' ||
		str[x - 1] == ';' ||
		str[x - 1] == '.' ||
		str[x - 1] == '!' ||
		str[x - 1] == '?' ||
		str[x - 1] == '"' ||
		str[x - 1] == '(' ||
		str[x - 1] == ')' ||
		str[x - 1] == '{' ||
		str[x - 1] == '}')
		str[x] -= 32;
	}
	return (str);
}
