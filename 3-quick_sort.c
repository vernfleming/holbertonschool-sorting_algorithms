#include "sort.h"

/**
 * swap - swaps two elements in array
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
 * lomuto_partition - lomuto partitioning
 * @array: array to sort
 * @low: first index
 * @high: last index
 * @size: size of array
 *
 * Return: index
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
