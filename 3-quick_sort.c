#include "sort.h"

/**
 * partition - scans and swaps them
 * @array: array of integer to be sorted
 * @lo: start index in array
 * @hi: ending index in array
 * @size: size of array
 * Return: new index
 */
int partition(int *array, int lo, int hi, size_t size)
{
	int pivot = array[hi];

	int i = lo;

	int tmp;

	for (int j = lo; j < hi; j++)
	{
		if (array[j] < pivot)
		{
			tmp = array[i];

			array[i] = array[j];
			array[j] = tmp;
			if (array[i] != array[j])
			{
				print_array(array, size);
			}
			i++;
		}
	}
	tmp = array[i];
	array[i] = array[hi];
	array[hi] = tmp;
	if (array[i] != array[hi])
		print_array(array, size);
	return (i);
}
/**
 * lomuto_sort - sorts through recursion
 * @array: array to sort
 * @lo: start index of an array
 * @hi: end index of an array
 * @size: size of an array
 */
void lomuto_sort(int *array, int lo, int hi, size_t size)
{
	int p;

	if (lo < hi)
	{
		p = partition(array, lo, hi, size);
		lomuto_sort(array, lo, p - 1, size);
		lomuto_sort(array, p + 1, hi, size);
	}
}


/**
 * quick_sort - sorts array in ascending order using Quick sort algorithim
 * @array: array to sort
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	lomuto_sort(array, 0, (int)size - 1, size);
}
