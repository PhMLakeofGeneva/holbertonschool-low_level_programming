#include <stdio.h>
#include "main.h"
/**
 * char *_strcpy - Print function that copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Return: Pointer to 'dest'
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
