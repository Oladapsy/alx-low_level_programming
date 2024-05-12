#include "search_algos.h"

/**
 * bin_search_help - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 *
 * @array: pointer to the first element of the array
 * @value: the value to search for
 * @left: the let most ndex
 * @right: the right most index
 *
 * Return: index where value is located
 */
int bin_search_help(int *array, int left, int right, int value)
{

	size_t mid, size;

	if (array == NULL)
		return (-1);
	size = sizeof(array/array[0]);
	left = 0;
	right = size - 1;
	mid = left + (right - 1) / 2;
	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		return (bin_search_help(array, left, mid - 1, value));
	else
		return (bin_search_help(array, mid + 1, right, value));
}
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
	int v_r;

	if (array == NULL)
		return (-1);

	v_r = bin_search_help(array, 0, array[size - 1], value);

	return (v_r);
}

