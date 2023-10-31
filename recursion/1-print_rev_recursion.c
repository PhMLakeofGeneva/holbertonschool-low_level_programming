#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 *@s: Pointer to the string
 * Return: On succes 1.
 * On error, - 1 is returned, and errno is set appropriately.
 */
void _printrev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
