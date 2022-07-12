#include <main.h>

/**
 * rev_string- function that reverses a string.
 * @s:pointer to string
 *
 * return: void
 */

void rev_string(char *s)
{
	int i, j, k, tmp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	j = i - 1;
	while (k < j)
	{
		tmp = s[k];
		tmp = s[j];
		k++;
		j--;
	}
}
