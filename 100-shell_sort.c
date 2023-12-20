#include "sort.h"

/**
 * get_gap - This is a function to calculate the gap between
 * elements to implement knuth sequance
 *
 * @size: the arry size
 *
 * Return: the gap size
 */

size_t get_gap(size_t size)
{
	size_t m;

	m = 1;
	while (m < size)
		m = m * 3 + 1;
	return ((m - 1) / 3);
}

/**
 * shell_sort - a function that sorts an array of integers in
 * ascending order using the Shell sort algorithm, using the
 * Knuth sequence
 *
 * @array: the given array to be sorted
 *
 * @size: the size of the array
 *
 * Return: Nothing
 */

void shell_sort(int *array, size_t size)
{
	size_t gaps, m, j;
	int tmp;

	if (!array || !size)
		return;

	for (gaps = get_gap(size); gaps; gaps = (gaps - 1) / 3)
	{
		for (m = gaps; m < size; m++)
		{
			tmp = array[m];
			for (j = m; j > gaps - 1 && array[j - gaps] > tmp; j -= gaps)
			{
				array[j] = array[j - gaps];
			}
			array[j] = tmp;
		}
		print_array(array, size);
	}
}
