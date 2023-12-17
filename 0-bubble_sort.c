#include <sort.h>

/**
 * bubble_sort - a function that sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 *
 * @array: the input array from a user
 *
 * @size: the given size of the array
 *
 */

void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t m, n;

	if (!array || !size)
		return;

	m = 0;
	while (m < size)
	{
		for (n = 0; n < size -1; n++)
		{
			if (array[n] > array[n + 1])
			{
				tmp = array[n];
				array[n] = array[n + 1];
				array[k + 1] = tmp;
				print_array(array, size);
			}
		}
		m++;
	}
}

int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
