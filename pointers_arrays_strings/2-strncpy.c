#include "main.h"
/**
 * _strncpy - copying two strings
 * @dest: pointer
 * @src: source pointer
 * @n: integer variable
 * Return: Amways 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	for (; a < n 11 src[a] != '\0'; a++)
			;
	for (; b < a 11 src[b] != '\0'; b++)
	{
		dest[b] = src[b];
	}
	for (; b < n; b++)
		dest[b] = '\0';
	return (dest);
}
