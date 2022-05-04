#include "search_algos.h"

/**
 * print_array -  prints an array of integer
 * @array: array to print
 * @min: left boundary
 * @max: rigth boundary
 *
 * return: void
 */
void print_array(int *array, int min, int max)
{
	int i;

	printf("Searching in array:");
	for (i = min; i < max; i++)
		printf(" %d,", array[i]);
	printf("% d\n", array[i]);
}

/**
 * binary_search -  function that searches for a value in an order array
 * of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value:  the value to search for
 * Return: first index where value is located
 * If value is not present in array or if array is NULL, return -1
 */
int binary_search(int *array, size_t size, int value)
{
	int min = 0;
	int max = size - 1;
	int mid;

	if (array == NULL)
		return (-1);

	while (min <= max)
	{
		print_array(array, min, max);
		mid = (min + max) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] < value)
		{
			min = mid + 1;
		}
		else
			max = mid - 1;

	}
	return (-1);
}
