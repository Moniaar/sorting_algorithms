#include <stdio.h>
#include "sort.h"

/**
 * swap - a function to swap 2 elements from
 * the array
 *
 * @a: the first element that needs to be swapped
 *
 * @b: the seconed element that needs to be swapped
 *
 * Return: Nothing (void)
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * swap_elem - a function to swap 2 elements from
 * the array
 *
 * @array: the input array from the user to be sorted
 *
 * @size: the size of the array to be sorted
 *
 * @low: the lowest element in an array
 *
 * @high: the highest (biggest) element in an array
 *
 * Return: Nothing (void)
 */

size_t swap_elem(int *array, ssize_t low, ssize_t high)
{
	int m, n, piv = array[high];

	for (m = n = low; n < high; n++)
		if (array[n] < piv)
		{
			swap(&array[n], &array[m]);
			m++;
		}

	swap(&array[m], &array[high]);

	return (m);
}

/**
 * partition - a function to do Lomuto partition for the
 * start of the sorting section
 *
 * @arr: the input array that needs to be sorted
 *
 * @low: the lowest element in the array
 *
 * @size: the size of the entred array
 *
 * @high: the highest element inside the array
 *
 * Return: integer postion of the current pivot
 */

void partition(int *array, size_t size, ssize_t low, ssize_t high)
{
	if (low < high)
	{
		size_t p;
		p = swap_elem(array, low, high);

		partition(array, size, low, p - 1);
		partition(array, size, p + 1, high);
	}

}

/**
 * quick_sort - a function to implement the algorithm of quicksort
 *
 * @array: the given array element as an input to be sorted
 *
 * @size: the size of the given input array
 *
 * Return: integer postion of the current pivot
 */

void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;
	partition(array, size, 0, size - 1);
}
