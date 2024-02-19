#include "sort.h"

/**
 * bubble_sort - sorts a array in ascending order using bubble_sort
 * @array:  array to sort
 * @size: size of array
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	int asc;
	unsigned int k, m;
	bool bubble = true;

	if (array == NULL || size < 2)
		return;

	while (bubble)
	{
		bubble = false;
		for (m = 0; m < size - 1; m++)
		{
			for (k = 0; k < size - 1; k++)
			{
				if (array[k] > array[k + 1])
				{
					int swap = array[k];
					array[k] = array[k + 1];
					array[k + 1] = swap;
					bubble = true;
					print_array(array, size);
					asc ++;
				}
				asc = 0;
			}
		}
	}
}
