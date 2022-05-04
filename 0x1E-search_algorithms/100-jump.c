#include "search_algos.h"

/**
 * jump_search - Searches a value in a sorted array of integers
 * @array: Array of integers
 * @size: Array's size
 * @value: Value to search
 *
 * Return: Index at which the value was found, -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size);
	size_t left = 0, right = 0;

	if (!array)
		return (-1);

	while (array[right] < value && right < size)
	{
		printf("Value checked array[%lu] = [%d]\n", right, array[right]);
		left = right;
		right += jump;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	for (; left < size && left <= right; left++)
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		if (array[left] == value)
			return (left);
	}

	return (-1);
}
