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
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
