#include "main.h"
/**
 * reverse_array - Reverses content of array
 * @a: array of integers to be reversed
 * @n: number of elements in the arrary
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n -1 - index] = a[index];
		a[index] = tmp;
	}
}
