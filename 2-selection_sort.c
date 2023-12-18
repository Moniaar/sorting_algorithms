#include "sort.h"

/**
 * selection_sort - a function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 *
 * @array: the given array to be sorted
 *
 * @size: the given size of the array
 *
 */

void selection_sort(int *array, size_t size)
{
	size_t m, n, p;
	int tmp;

	if (!array || !size)
		return;
	for (m = 0; m < size - 1; m++)
	{
		for (n = size - 1, p = m + 1; n > m; n--)
		{
			if (array[n] < array[p])
			{
				p = n;
			}
		}
		if (array[m] > array[p])
		{
			tmp = array[m];
			array[m] = array[p];
			array[p] = tmp;
			print_array(array, size);
		}
	}
}
