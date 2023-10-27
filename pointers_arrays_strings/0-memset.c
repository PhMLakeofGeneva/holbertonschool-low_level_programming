#include "main.h"
/**
 * memset - Fills the first n bytes of the memory area
 *          pointed to by @s with the constant byte @c.
 *
 * @s: pointer to start of memory area
 * @b: constant byte to fill
 * @n: num bytes to fill in
 *
 * Return: pointer to beginning of memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *start = s;

	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (start);
}
