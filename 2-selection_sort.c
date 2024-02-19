#include "sort.h"

/**
 * selection_sort - uses selection sort to sort array in ascending order
 * @array: contains array to sort
 * @size: size of array
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, m;


	if (!array || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		size_t min_idx = i;

		for (m = i + 1; m < size; m++)
		{
			if (array[m] < array[min_idx])
				min_idx = m;
		}
		if (min_idx != i)
		{
			int temp = array[i];

			array[i] = array[min_idx];
			array[min_idx] = temp;
			print_array(array, size);
		}
	}
}
