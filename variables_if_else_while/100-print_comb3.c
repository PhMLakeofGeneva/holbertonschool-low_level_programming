#include <stdio.h>

/**
 * main - a simple program that outputs 0-9 seperated by commas
 *
 * Return: 0 on success
 */

int main(void)
{
	int i;
	int j;

	for (1 = 48; i < 57; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 56 || j != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
