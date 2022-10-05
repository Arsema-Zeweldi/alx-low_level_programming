#include "search_algos.h"
/**
* print_arr - prints array
* @array: array
* @begin: beginning
* @end: end
* Return: void
**/
void print_arr(int *array, size_t begin, size_t end)
{

	unsigned int m;

	printf("Searching in array: ");
	for (m = begin; m < end; m++)
	{
		printf("%d, ", array[m]);
	}
	printf("%d\n", array[end]);
}

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the binary search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements
 * @value: value to search for
 * Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int left = 0;
	unsigned int right;
	int middle;

	right = size - 1;

	if (array == NULL)
		return (-1);
	if (size == 1)
	{
		return (array[left]);
	}
	while (right >= left)
	{
		if (left == 0 && right == 0)
			return (-1);
		print_arr(array, left, right);
		middle = (right + left) / 2;
		if (array[middle] == value)
			return (array[middle]);
		else if (array[middle] < value)
		{
			left = middle + 1;
		}
		else if (array[middle] > value)
		{
			right = middle;
		}
	}
	return (-1);
}
