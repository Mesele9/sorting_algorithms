#include "sort.h"

/**
 * swap - swaps two integers.
 * @fp: Pointer to the first integer
 * @sp: Pointer to the second integer
 * Return: Nothing
 */
void swap(int *fp, int *sp)
{
	int temp = *fp;
	*fp = *sp;
	*sp = temp;
}

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * @array: array of integers to be sorted
 * @size: Size of the array
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
