#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 *
 * @array: pointer to the first element of the array
 * @size: the number of element in the array
 * @value: the value to search for
 *
 * Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0; right = size -1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		else
			left = i + 1;
	}

	return (-1);
}
