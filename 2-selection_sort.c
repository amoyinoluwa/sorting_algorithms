#include "sort.h"

/**
 * selection_sort - selection sort algortihm
 * @array: array to be sorted
 * @size: size of the array
 * Return: nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (i != min)
			swap(&array[i], &array[min]);
		print_array(array, size);
	}
}
