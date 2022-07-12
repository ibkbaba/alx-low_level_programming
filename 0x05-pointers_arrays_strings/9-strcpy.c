#include "main.h"

/**
 * _strcpy-function that copies the string
 * @dest: this is destiny
 * @src:the copy
 * Return: return copy
 */

char *_strcpy(char *dest, char *src)
{
	char *star = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
