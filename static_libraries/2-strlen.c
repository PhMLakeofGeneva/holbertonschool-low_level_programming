#include "main.h"
/**
* _strlen - this function returns the length of s string
* @s : input string
* Return: length of a string
*/
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
