#include "sort.h"

/**
 * swap - swaps two ints in an array
 * @a: pointer to first int
 * @b: pointer to second int
 */
void swap(int *a, int *b)
{
	if (a != b)
	{
		int temp = *a;
		*a = *b;
		*b = temp;
	}
}

/**
 * lomuto_partition - lomuto partitions the array
 * @array: array to partition
 * @low: starting index
 * @high: ending index
 * @size: size of array
 *
 * Return: final partition index
 */

int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}

	if (i + 1 != high)
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}

	return (i + 1);
}

/**
 * quick_sort_recursive - recursively sorts partition of aray
 * @array: array to sort
 * @low: starting index
 * @high: starting index
 * @size: size of array
 */

void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = lomuto_partition(array, low, high, size);
		quick_sort_recursive(array, low, pivot - 1, size);
		quick_sort_recursive(array, pivot + 1, high, size);
	}
}

/**
 * quick_sort - sorts an array
 * @array: array getting sorted
 * @size: number of elements
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursive(array, 0, (int)(size - 1), size);
}
