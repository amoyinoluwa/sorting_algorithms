#include "sort.h"

/**
 * swap - swaps two elements in an array
 * @x: first element
 * @y: second element
 * Return: nothing
 */

void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * bubble_sort - sorts an array of elements with the bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	bool swapped;
	size_t i;

	while (true)
	{
		swapped = false;
		for (i = 1; i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				swapped = true;
				swap(&array[i - 1], &array[i]);
				print_array(array, size);
			}
		}
		if (swapped == false)
			break;
	}
}
