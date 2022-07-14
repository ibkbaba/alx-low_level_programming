#include "main.h"

/**
 * _strncpy-function that copies a string
 * terminating null byte
 *
 * @dest:buffer storing string
 * @src:the source string
 * @n:max byte
 * Return:return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
