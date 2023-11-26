#include "sort.h"

/**
 * swap_ints - Swaps two integers in an array.
 * @n: first integer
 * @m: second integer
 */

void swap_ints(int *m, int *n)
{
	int tmp;
	tmp = *m;
	*m = *n;
	*n = tmp;
}

/**
 * bubble_sort - sorts an array of ints in
 * ascending order (like a bubble)
 * @array: array of ints to be sorted
 * @size: size of the array
 *
 * Return: sorted array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t v, length = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (v = 0; v < length - 1; v++)
		{
			if (array[v] > array[v + 1])
			{
				swap_ints(array + v, array + v + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		length--;
	}
}
