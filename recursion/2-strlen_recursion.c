#include "main.h"
/**
 * _strlen-recursion - Returns the length of a string.
 * @s: strlen
 * Return: Alway 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
void int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
