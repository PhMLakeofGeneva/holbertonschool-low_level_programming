#include <stdio.h>

/**
 *  main - main
 *   Description: Print all possible combinations of single-digit numbers.
 *   Numbers must be separated by commas and a space.
 *   Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}
