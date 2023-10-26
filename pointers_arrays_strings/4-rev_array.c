#include "main.h"
/**
 * reverse_array - revereses an array.
 * @a: pointer to array.
 * @n: number of element of the array.
 * Description: This function reverses the content of an array of integers.
 * number of elements of an array.  
 */

void reverse_array(int *a, int n)
{
	int temp, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		temp = a[counter];
		a[counter++] = a[n];
		a[n--] = temp;
	}
}
