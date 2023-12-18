#include <stdio.h>
#include "sort.h"

/**
 * swap_elem - a function to swap 2 elements from
 * the array
 *
 * @a: the first element that needs to be swapped
 *
 * @b: the seconed element that needs to be swapped
 *
 * Return: Nothing (void)
 */

void swap_elem(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - a function to do Lomuto partition for the
 * start of the sorting section
 *
 * @arr: the input array that needs to be sorted
 *
 * @low: the lowest element in the array
 *
 * @high: the highest element inside the array
 *
 * Return: integer postion of the current pivot
 */

int partition(int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = (low - 1);
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap_elem(&arr[i], &arr[j]);
		}
	}
	swap_elem(&arr[i + 1], &arr[high]);
	return (i + 1);
}

/**
 * quickSort - a function to implement the algorithm of quicksort
 *
 * @arr: the given array element as an input to be sorted
 *
 * @low: the lowest element in the array
 *
 * @high: the highest element inside the array
 *
 * Return: integer postion of the current pivot
 */

void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		int pi;

		pi = partition(arr, low, high);

		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}
