#include "sort.h"

/**
 * swap_ints - Swaps two integers in an array.
 * @n: first integer
 * @m: second integer
 *
 */

void swap_ints(int *m, int *n)
{
	int tmp;
	tmp = *m;
	*m = *n;
	*n = tmp;
}

/**
 * selection_sort - Sorts an array of integers in ascending order
 * selectively
 * @array: array of integers
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	int *m;
	size_t a, b;

	if (array == NULL || size < 2)
		return;

	for (a = 0; a < size - 1; a++)
	{
		m = array + a;
		for (b = a + 1; b < size; b++)
			m = (array[b] < *m) ? (array + b) : m;
		if ((array + a) != m)
		{
			swap_ints(array + a, m);
			print_array(array, size);
		}
	}
}
