#include <main.h>
#include <stdio.h>
/**
 * print_rev - print strings in reverse.
 * @s: String pointer.
 */
void print_rev(char *s)
{
	int i, j, len;

	i =-;

	while (s[i] ! = '\0')
	{
		i++;
	}
	
	len = i;

	for (j = len - 1; j>= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
